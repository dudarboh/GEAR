#ifndef GEAR_Util_H
#define GEAR_Util_H 1


#include "gear/GearParameters.h"
#include "gear/BField.h"
#include "gear/TPCParameters.h"
#include "gear/TPCModule.h"
#include "gear/ZPlanarParameters.h"
#include "gear/FTDParameters.h"
#include "gear/TrackerPlanesParameters.h"
#include "gear/SiPlanesParameters.h"
#include "gear/CalorimeterParameters.h"
#include "gear/GearMgr.h"
#include "gear/GEAR.h"

#include <iostream>

namespace gear {
    

  std::ostream& operator<< (  std::ostream& s,  const GearMgr& m ) ;


  std::ostream& operator<< (  std::ostream& s,  const GearParameters& p ) ;
  
  
  std::ostream& operator<< (  std::ostream& s,  const TPCParameters& p ) ;
  
  std::ostream& operator<< (  std::ostream& s,  const TPCModule& p ) ;

  std::ostream& operator<< (  std::ostream& s,  const BField& b ) ;


  std::ostream& operator<< (  std::ostream& s,  const CalorimeterParameters& p ) ;
  

  std::ostream& operator<< (  std::ostream& s,  const ZPlanarParameters& p ) ;


  std::ostream& operator<< (  std::ostream& s,  const FTDParameters& p ) ;


  std::ostream& operator<< (  std::ostream& s,  const TrackerPlanesParameters& p ) ;

  std::ostream& operator<< (  std::ostream& s,  const SiPlanesParameters& p ) ;

  std::ostream& operator<< (  std::ostream& s, const  SimpleMaterial& m ) ;


} // namespace gear

#endif /* ifndef GEAR_Util_H */
