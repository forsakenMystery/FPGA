
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Divider is
    Port ( clk_in : in  STD_LOGIC;
           num : in  Integer;
           clk_out : out  STD_LOGIC);
end Divider;

architecture Behavioral of Divider is
signal count: integer:=1;
signal temp : std_logic := '0';
begin
process(clk_in)
begin
if(rising_edge(clk_in)) then
count<=count+1;
if(count = num) then
temp <= not( temp );
count<=1;
end if;
end if;
clk_out<=temp;
end process;
end Behavioral;

