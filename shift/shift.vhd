
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity shift is
    Port ( input	 : in  STD_LOGIC_VECTOR (7 downto 0);
           lor_in : in  STD_LOGIC;
           ctrl_lor : in  STD_LOGIC;
           ctrl_par : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR (7 downto 0);
           lor_out : out  STD_LOGIC;
			  clk : in STD_LOGIC);
end shift;

architecture Behavioral of shift is
signal temp: std_logic_vector(7 downto 0); 
begin
process(clk)

begin
if rising_edge(clk) then
if ctrl_par = '1' then
temp<=input;
output<=temp;
else 
if ctrl_lor = '1' then
lor_out<=temp(7);
temp(7)<=temp(6);
temp(6)<=temp(5);
temp(5)<=temp(4);
temp(4)<=temp(3);
temp(3)<=temp(2);
temp(2)<=temp(1);
temp(1)<=temp(0);
temp(0)<=lor_in;
output<=temp;
else
lor_out<=temp(0);
temp(0)<=temp(1);
temp(1)<=temp(2);
temp(2)<=temp(3);
temp(3)<=temp(4);
temp(4)<=temp(5);
temp(5)<=temp(6);
temp(6)<=temp(7);
temp(7)<=lor_in;
output<=temp;
end if;
end if;
end if;
end process;
end Behavioral;

