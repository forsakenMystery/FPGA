
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.all;
use ieee.std_logic_unsigned.all;


entity Ic74381 is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
			  C : in  STD_LOGIC_VECTOR (3 downto 0);
           S : in  STD_LOGIC_VECTOR (2 downto 0);
           F : out  STD_LOGIC_VECTOR (3 downto 0);
           cout : out  STD_LOGIC);
end Ic74381;

architecture Behavioral of Ic74381 is

signal res:std_logic_vector(4 downto 0);
signal AC:std_logic_vector(4 downto 0);
signal BC:std_logic_vector(4 downto 0);
begin
AC<='0' & A;
BC<='0' & B;
res<= (AC or BC) when s="101" else
      (AC and BC) when s="110" else
	   (AC xor BC) when s="100" else
		(AC - BC) when s="010" else
		(BC- AC) when s="001" else
		(AC + BC + C) when s="011" else
		"11111" when s="111" else
		(A*B) when s="110" else
		"00000";

F<=res(3 downto 0);
cout<=res(4);

end Behavioral;

