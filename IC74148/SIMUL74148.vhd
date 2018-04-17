
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
entity SIMUL74148 is
end SIMUL74148;

architecture behavior of SIMUL74148 is
COMPONENT IC74148 Port ( input : in STD_LOGIC_VECTOR (7 downto 0);
           A : out STD_LOGIC_VECTOR (2 downto 0);
           EI : in STD_LOGIC;
           EO : out STD_LOGIC;
           GS : out STD_LOGIC);
END COMPONENT;
signal input:std_logic_vector(7 downto 0):=(others=>'0') ; 
signal A:std_logic_vector(2 downto 0);
signal EI:std_logic:='1';
signal EO,GS:std_logic;
begin
uut:IC74148 PORT MAP(input=>input,A=>A,EI=>EI,EO=>EO,GS=>GS);
EI<='0' after 340 ns ;
input<="11111111" ,
"11111110" after 20ns,
"11111101" after 40ns,
"11111100" after 60ns,
"11111011" after 80ns,
"11111010" after 100ns,
"11111001" after 120ns,
"11111000" after 140ns,
"11110111" after 160ns,
"11110110" after 180ns,
"11110101" after 200ns,
"11110100" after 220ns,
"11110011" after 240ns,
"11110010" after 260ns,
"11110001" after 280ns,
"11110000" after 300ns,
"11101111" after 320ns,
"11110010" after 340ns,
"11111110" after 360ns,
"00000010" after 380ns,
"00010000" after 400ns,
"11111100" after 420ns,
"10000000" after 440ns,
"10000110" after 460ns,
"00011100" after 480ns,
"00000000" after 500ns;
end;

