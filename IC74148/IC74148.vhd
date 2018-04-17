
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity IC74148 is
Port ( input : in STD_LOGIC_VECTOR (7 downto 0);
           A : out STD_LOGIC_VECTOR (2 downto 0);
           EI : in STD_LOGIC;
           EO : out STD_LOGIC;
           GS : out STD_LOGIC);
end IC74148;

architecture Behavioral of IC74148 is

signal in_s: std_logic_vector(8 downto 0);
begin
in_s<=EI&input;
A<="111" when in_s(8)='1'  else
"111" when in_s="011111111"  else
"000" when in_s(8 downto 7)="00"  else
"001" when in_s(8 downto 6)="010"  else
"010" when in_s(8 downto 5)="0110"  else
"011" when in_s(8 downto 4)="01110"  else
"100" when in_s(8 downto 3)="011110"  else
"101" when in_s(8 downto 2)="0111110"  else
"110" when in_s(8 downto 1)="01111110"  else
"111" when in_s="011111110"  ;
EO<='0' when in_s(8)='1'  else
'1' when in_s="011111111"  else
'0' when in_s(8 downto 7)="00"  else
'0' when in_s(8 downto 6)="010"  else
'0' when in_s(8 downto 5)="0110"  else
'0' when in_s(8 downto 4)="01110"  else
'0' when in_s(8 downto 3)="011110"  else
'0' when in_s(8 downto 2)="0111110"  else
'0' when in_s(8 downto 1)="01111110"  else
'0' when in_s="011111110"  ;
GS<='1' when in_s(8)='1'  else
'1' when in_s="011111111"  else
'0' when in_s(8 downto 7)="00"  else
'0' when in_s(8 downto 6)="010"  else
'0' when in_s(8 downto 5)="0110"  else
'0' when in_s(8 downto 4)="01110"  else
'0' when in_s(8 downto 3)="011110"  else
'0' when in_s(8 downto 2)="0111110"  else
'0' when in_s(8 downto 1)="01111110"  else
'0' when in_s="011111110"  ;
end Behavioral;


