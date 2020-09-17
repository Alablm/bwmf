class CfgLoadouts {
  // Use POTATO to run gear assignment
  usePotato = 1;

  // Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
  // Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
  allowMagnifiedOptics = 0;

  // Allow changeable optics on a global level, note: optic options obey allowMagnifiedOptics rules
  allowChangeableOptics = 1;

  // Do Vehicle Loadouts
  // (1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
  setVehicleLoadouts = -1;

  // Fallback: use a basic soldiers loadout when the unit's classname isn't found (for Alive spawning random units)
  useFallback = 1;

  // prefixes to strip from the units classnames
  prefixes[] = {"b_", "o_", "i_"};

  // Shared defines
  #include "Loadouts\_do-not-edit\common.hpp" // DO NOT COMMENT OUT, WILL BREAK EVERYTHING

//TO SELECT A LOADOUT
/* Select your preferred loadout from the appropriate folder and
rename it to it's respective side or enter the file name here */

  // West factions
  #include "Loadouts\_do-not-edit\west_gear.hpp"
  class blu_f { // BluFor
    #include "Loadouts\WEST\west.hpp"
  };

  // Indy factions
  #include "Loadouts\_do-not-edit\indy_gear.hpp"
  class ind_f { // Indy
    #include "Loadouts\INDY\indy.hpp"
  };

  // East Factions
  #include "Loadouts\_do-not-edit\east_gear.hpp"
  class opf_f { // OpFor
    #include "Loadouts\EAST\east.hpp"
  };

  class potato_msv { // MSV
    #include "Loadouts\MSV\MSV.hpp"
  };

  // Civilians (mainly for RP missions)
  #include "Loadouts\_do-not-edit\civ_gear.hpp"
  #include "Loadouts\CIV\civ.hpp" // Bare example of doing civilian loadouts
};
