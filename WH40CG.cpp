#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <map>

struct Character {
    //Origin of character
    std::string home_world;
    std::string origin;
    //Back Ground
    std::string darkest_hour;
    std::string triumph;
    std::string conviction;
    //Class
    std::string archetypes;
    std::string secondArchetypes;
};

std::string getRandomElement(const std::vector<std::string>& vec, std::mt19937& rng) {
    std::uniform_int_distribution<size_t> dist(0, vec.size() - 1);
    return vec[dist(rng)];
}

int main(){

    //Pool of Choice
std::vector<std::string> home_world = {"Death World", "Imperial World", "Voidborn", "Hive World", "Forge World", "Fortress World" };
std::vector<std::string> origin = {"Astra Militarum", "Commissar", "Ministorum Priest", "Crime Lord", "Navy Officer", "Vigilant", "Castigator", "Subductor", "Biomancer", "Noble", "Pyromancer", "Diviner", "Sanctic", "Telepath"};
std::vector<std::string> triumph = {"Apex of Brilliance", "Illustrous Glory", "Feat of Greatness"};
std::vector<std::string> conviction ={"Dogmatic", "Iconoclast", "Heretical", "No conviction",};
std::vector<std::string> darkest_hour ={"Grim Portents", "Brand of Shame", "Shadow of Torment"};
std::vector<std::string> archetypes = {"Warrior", "Soldier", "Officer", "Operative", "Blade Dancer"};
std::map<std::string, std::vector<std::string>> secondArchetype = {
    {"Soldier", {"Bounty Hunter", "Master Tactician", "Arch-Militant", "Overseer"}},
    {"Warrior", {"Assassin", "Vanguard", "Arch-Militant", "Executioner", "Overseer"}},
    {"Officer", {"Grand Strategist", "Vanguard", "Master Tactician", "Overseer"}},
    {"Operative", {"Assassin", "Bounty Hunter", "Grand Strategist", "Executioner", "Overseer"}},
    {"Blade Dancer", {"Assassin", "Master Tactician", "Arch-Militant", "Executioner", "Overseer"}},
};

    //Random Generator
std::random_device rd;
std::mt19937 rng(rd());

Character generatedChar;
generatedChar.home_world = getRandomElement(home_world, rng);
generatedChar.origin = getRandomElement(origin, rng);
generatedChar.conviction = getRandomElement(conviction, rng);
generatedChar.darkest_hour = getRandomElement(darkest_hour, rng);
generatedChar.triumph = getRandomElement(triumph, rng);   
generatedChar.archetypes = getRandomElement(archetypes, rng);
const std::vector<std::string>& validSecondOptions = secondArchetype[generatedChar.archetypes];
generatedChar.secondArchetypes = getRandomElement(validSecondOptions, rng); 

//This is a SCII art of the eagle

std::cout << "\033[1m\033[32m" << "  :+*#%%@@@@@@@@@@@@@@@@@@@@@@@%                  %@@@@@@@@@@@@@@@@@@@@@@@%%#*+- " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "    -@@@@@@@@@@@@@%#*******@@@*   .+----.   :---=:   *@@@*******#%@@@@@@@@@@@@@- " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "    .======%@@@@@@@@@@%+%@@+  .=*+#@=@=  .%-@#*%=.  -@@%**@@@@@@@@@@%+=====:     " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "      #@@@@@*=== =++@@@@@@@+   -    :@@-.@@*    -   .@@@@@@@%+= :===@@@@@#       " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "          =**@@@@@@@*-+#@@@@*.  :*#@%-.#@. #@@*+   *@@@@#=-*@@@@@@@#*+           " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "          :@@@@*: .#@@@#*@@@@@@@@@@:@%+@@*+@@*@@@@@@@@@#-@@@#- :=@@@@%.          " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "=================================================================================" << "\033[0m\n\n";

//This is how it will be structured

std::cout << "\033[1m\033[32m" << "+++++++++++++++ Presenting Rogue Trader Von Valencius +++++++++++++++" << "\033[0m\n\n";
std::cout << "\033[1m\033[32m" << "Home World:  " << generatedChar.home_world << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "Origin:  " << generatedChar.origin << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "Conviction:  " << generatedChar.conviction << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "Darkest Hour:  " << generatedChar.darkest_hour << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "Triumph:  " << generatedChar.triumph << "\033[0m\n\n";
std::cout << "\033[1m\033[32m" << "Archetypes:  " << generatedChar.archetypes << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "Second Archetype:  " << generatedChar.secondArchetypes << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "Third Archetype:  Exemplar" << "\033[0m\n\n";
std::cout << "\033[1m\033[32m" << "=================================================================================" << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "               *%@@@@.+@@*%@@*@%@:=@@.@@@@.+@=%##%@:@%#@@+.#@@@@*                " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "               *@@+ +@@@:@@* @%**%@@-@@@@@@:@@%+#+@@+@@.%@@+ +@@%.               " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "                  =@@@#.%@@ @@   .%.+@@@@@@@ %*   @@=%@@:-@@@=                   " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "                    . .@@%.=        @@@@@@@@@       % #@@= -                     " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "                                   :@:*@@@@%:#=                                  " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "                                  @@.@#@##%:+@=                                  " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "                              .@+@@-+.%%@+=* @@++.                               " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "                               .@.#-  -@@*  -# #+                                " << "\033[0m\n";
std::cout << "\033[1m\033[32m" << "                              ##.      .      +#                                 " << "\033[0m\n";


std::cin.get();

return 0;

}