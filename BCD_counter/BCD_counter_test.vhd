--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:01:43 04/21/2017
-- Design Name:   
-- Module Name:   E:/Code/FPGA/BCD_counter/BCD_counter_test.vhd
-- Project Name:  BCD_counter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: BCD_counter
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY BCD_counter_test IS
END BCD_counter_test;
 
ARCHITECTURE behavior OF BCD_counter_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BCD_counter
    PORT(
         Clock_enable_B : IN  std_logic;
         input : IN  std_logic_vector(3 downto 0);
         ctrl : IN  std_logic;
         Clock : IN  std_logic;
         Reset : IN  std_logic;
         overf : OUT  std_logic;
         error : OUT  std_logic;
         Output : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Clock_enable_B : std_logic := '0';
   signal input : std_logic_vector(3 downto 0) := (others => '0');
   signal ctrl : std_logic := '0';
   signal Clock : std_logic := '0';
   signal Reset : std_logic := '0';

 	--Outputs
   signal overf : std_logic;
   signal error : std_logic;
   signal Output : std_logic_vector(3 downto 0);


 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BCD_counter PORT MAP (
          Clock_enable_B => Clock_enable_B,
          input => input,
          ctrl => ctrl,
          Clock => Clock,
          Reset => Reset,
          overf => overf,
          error => error,
          Output => Output
        );
input<="1111" after 100 ns , "0011" after 200 ns;
Clock_enable_B<='1' after 100 ns , '0' after 115 ns, '1' after 200 ns ,'0' after 215 ns;
reset<='1' after 115 ns,'0' after 130 ns;
ctrl<='1' after 120 ns;
Clock<='1' after 10 ns,'0' after 20 ns,'1' after 30 ns,'0' after 40 ns,'1' after 50 ns,'0' after 60 ns,'1' after 70 ns,'0' after 80 ns,'1' after 90 ns,'0' after 100 ns,'1' after 110 ns,'0' after 120 ns,'1' after 130 ns,'0' after 140 ns,'1' after 150 ns,'0' after 160 ns,'1' after 170 ns,'0' after 180 ns,'1' after 190 ns,'0' after 200 ns,'1' after 210 ns,'0' after 220 ns,'1' after 230 ns,'0' after 240 ns,'1' after 250 ns,'0' after 260 ns,'1' after 270 ns;
END;
