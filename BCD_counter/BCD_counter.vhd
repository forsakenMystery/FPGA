library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity BCD_counter is
   port( Clock_enable_B: in std_logic;
	 input: in std_logic_vector(3 downto 0);
	 ctrl : in std_logic;
 	 Clock: in std_logic;
 	 Reset: in std_logic;
	 overf: out std_logic;
	 error: out std_logic;
 	 Output: out std_logic_vector(3 downto 0));
end BCD_counter;
 
architecture Behavioral of BCD_counter is
   signal temp: std_logic_vector(3 downto 0):="0000";
begin   process(Clock,Reset)
   begin
      if Reset='1' then
         temp <= "0000";
      elsif(rising_edge(Clock)) then
         if(clock_enable_B='1') then
				if(input<"1001") then
					temp<=input;
				else
					error<='1';
				end if;
			else
				if(ctrl='1')then
					if(temp="1001") then
						temp<="0000";
						overf<='1';
					else
						temp<=temp+1;
					end if;
				else
					if(temp="0000") then
						temp<="1001";
						overf<='1';
					else
						temp<=temp-1;
					end if;
				end if;
			end if;
      end if;
		
   end process;
   Output <= temp;
end Behavioral;