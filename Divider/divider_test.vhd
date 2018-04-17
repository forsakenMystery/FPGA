LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY divider_test IS
END divider_test;
 
ARCHITECTURE behavior OF divider_test IS 
 
 
    COMPONENT Divider
    PORT(
         clk_in : IN  std_logic;
         num : IN  integer;
         clk_out : OUT  std_logic
        );
    END COMPONENT;
    

   signal clk_in : std_logic := '0';
   signal num : integer := 0;

   signal clk_out : std_logic;


BEGIN
 
   uut: Divider PORT MAP (
          clk_in => clk_in,
          num => num,
          clk_out => clk_out
        );


    num<=2 after 30 ns , 3 after 100 ns;
    clk_in<='1' after 10 ns,'0' after 20 ns,'1' after 30 ns,'0' after 40 ns,'1' after 50 ns,'0' after 60 ns,'1' after 70 ns,'0' after 80 ns,'1' after 90 ns,'0' after 100 ns,'1' after 110 ns,'0' after 120 ns,'1' after 130 ns,'0' after 140 ns;

END;