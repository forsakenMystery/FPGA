
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY shift_test IS
END shift_test;
 
ARCHITECTURE behavior OF shift_test IS 
 
 
    COMPONENT shift
    PORT(
         input : IN  std_logic_vector(7 downto 0);
         lor_in : IN  std_logic;
         ctrl_lor : IN  std_logic;
         ctrl_par : IN  std_logic;
         output : OUT  std_logic_vector(7 downto 0);
         lor_out : OUT  std_logic;
         clk : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal input : std_logic_vector(7 downto 0) := (others => '0');
   signal lor_in : std_logic := '0';
   signal ctrl_lor : std_logic := '0';
   signal ctrl_par : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal output : std_logic_vector(7 downto 0);
   signal lor_out : std_logic;


 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: shift PORT MAP (
          input => input,
          lor_in => lor_in,
          ctrl_lor => ctrl_lor,
          ctrl_par => ctrl_par,
          output => output,
          lor_out => lor_out,
          clk => clk
        );

   clk<='1' after 50 ns , '0' after 100 ns , '1' after 200 ns , '0' after 300 ns;
	ctrl_par<='1' after 50 ns , '0' after 100 ns;
	ctrl_lor<='1' after 200 ns;
	lor_in<='1' after 200 ns;
	input<="01111110" after 50 ns;
	

END;
