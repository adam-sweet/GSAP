/**  Empty Prognoser - Body
 *   @class     EmptyPrognoser EmptyPrognoser.h
 *   @ingroup   GPIC++
 *   @ingroup   ProgLib
 *
 *   @brief     Empty Prognoser Class
 *
 *   The purpose of this class is to serve as a template for creating future prognosers
 *
 *   @author    Chris Teubert
 *   @version   1.1.0
 *
 *   @pre       Prognostic Configuration File and Prognoster Configuration Files
 *
 *      Contact: Chris Teubert (Christopher.a.teubert@nasa.gov)
 *      Created: November 11, 2015
 *
 *   @copyright Copyright (c) 2013-2018 United States Government as represented by
 *     the Administrator of the National Aeronautics and Space Administration.
 *     All Rights Reserved.
 */
#include "GSAPConfigMap.h"
#include "EmptyPrognoser.h"

namespace PCOE {
    EmptyPrognoser::EmptyPrognoser(GSAPConfigMap & configMap) :
        CommonPrognoser(configMap) {
        // DEFINE EVENTS FOR THIS SPECIFIC PROGNOSER
        // Ex:
            // results.addEvent("EOL");

        // Handle Configuration
        log.WriteLine(LOG_DEBUG, moduleName, "Configuring");
        // std::string a = configMap.at("ExampleParam");
    }

    void EmptyPrognoser::step() {
        log.WriteLine(LOG_TRACE, moduleName, "Running Monitor Step");

        // Update States
    //    results.state["STATE1"].set(1.1);
    //    results.state["STATE2"].set(0.9);

        log.WriteLine(LOG_TRACE, moduleName, "Running Prediction Step");
        // Update Time To Events
        //    results.timeToEvent[MEAN].set(1.5);

        // Update Future Safety Metrics
    }

    // *------------------------------------------------------*
    // |          Optional Methods- Uncomment to use          |
    // *------------------------------------------------------*
    // void EmptyPrognoser::checkInputValidity() {
    // }
    //
    // bool EmptyPrognoser::isEnoughData() {
    //    ///@todo(CT): Fill out example of checking if there is enough data
    //    return true
    // }
    //
    // void EmptyPrognoser::checkResultValidity() {
    //    ///@todo(CT): Fill out example of setting to invalid
    // }
}
