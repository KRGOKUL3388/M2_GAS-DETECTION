# GAS DETECTION USING ATMEGA328P


Gas leakage is a serious problem and nowadays it is observed in many places like residences,
industries, and vehicles like Compressed Natural Gas (CNG), buses, cars, etc. It is noticed that due to
gas leakage, dangerous accidents occur. The Liquefied petroleum gas (LPG), or propane, is a
flammable mixture of hydrocarbon gases used as fuel in many applications like homes, hostels,
industries, automobiles, and vehicles because of its desirable properties which include high calorific
value, less smoke, less soot, and meager harm to the environment. Liquid petroleum gas (LPG) is
highly inflammable and can burn even at some distance from the source of leakage. This energy
source is primarily composed of propane and butane which are highly flammable chemical
compounds. These gases can catch fire easily. In homes, LPG is used mainly for cooking purposes.
When a leak occurs, the leaked gases may lead to an explosion. Gas leakage leads to various
accidents resulting in both material loss and human injuries. Home fires have been occurring
frequently and the threat to human lives and properties has been growing in recent years. The risks
of explosion, fire, suffocation are based on their physical properties such toxicity, flammability, etc.
The number of deaths due to the explosion of gas cylinders has been increasing in recent years. The
Bhopal gas tragedy is an example of accidents due to gas leakage.
The reason for such explosions is due to substandard cylinders, old valves, no regular checking
of gas cylinders, worn out regulators and a lack of awareness of handling gas cylinders. Therefore,
the gas leakage should be detected and controlled to protect people from danger. An odorant such as
ethane thiol is added to LPG, so that leaks can be detected easily by most people. However, some
people who have a reduced sense of smell may not be able to rely upon this inherent safety
mechanism. A gas leakage detector becomes vital and helps to protect people from the dangers of
gas leakage. A number of research papers have been published on gas leakage detection techniques
[1–8]. K. Padmapriya et al. proposed the design of a wireless LPG monitoring system. In this paper, the user is alerted about the gas leakage through SMS and the power supply is turned off [6].
Meenakshi Vidya et al. proposed the leakage detection and real time gas monitoring system. In this
system, the gas leakage is detected and controlled by means of an exhaust fan. The level of LPG in
cylinder is also continuously monitored [7]. Selvapriya et al. proposed the system in which the
leakage is detected by the gas sensor and produce the results in the audio and visual forms. It
provides a design approach on software as well as hardware [8]. In the existing method, different
gas sensing technology is used.
In this paper a low-cost advanced sensor-based gas leakage detector, alert and control system is
proposed and discussed. The system is very efficient, user friendly, portable, small in size and cost
effective. It will cost only 917 Bangladeshi taka which is equivalent to ten USD. 
# METHODS AND MATERIALS
In this paper, semiconductor sensors are used to detect LPG gas. An MQ6 semiconductor sensor
is used. Sensitive material of the MQ-6 gas sensor is SnO2, which has lower conductivity in clean air.
When the target combustible gas exists, the sensor conductivity increases along with the rising gas
concentration. The MQ6 gas sensor has a high sensitivity to Propane, Butane and LPG, and response
to Natural gas. The sensor could be used to detect different combustible gasses, especially Methane;
it hasa lowcost and is suitable for different applications. The MQ-6 can detect gas concentrations
anywhere from 200 to 10,000 ppm. The sensor’s output is an analog resistance. Figure 1 shows the
block diagram of the gas leakage detection and alert system. 
This system is based on the Arduino UNO R3 and MQ-6 gas sensor. When the sensor detects
gas in the atmosphere, it will give digital output 1 and if gas in not detected the sensor will give
digital output 0. Arduino will receive the sensor output as digital input. If the sensor output is high,
then the buzzer will start tuning along with the LCD that will show that “Gas detected: Yes”. If the
sensor output is low then buzzer will not be tuning, and the LCD will show that “Gas detected: No”.
The buzzer most commonly consists of a number of switches or sensors connected to control unit
that determines which button was pushed or whether a preset time has lapsed, and usually
illuminates a light on the appreciate button or control panel, and sounds a warning in the form of a
continuous or intermittent buzzing or beeping sound.
# FUTURE WORK
Overall, software and hardware parts of the systems have been developed and tested by
introducing a small amount of LPG near gas sensor module. The authors of this paper are currently
working to include multi functions with this device. One of the notable future functions of this
system is to add a sub system where wastage of gas and the uses of gas can be monitored using this
system. The system is flexible as a greater number of sensors and relays can be added to it according
to the whole LPG supply setup in those premises. The author is adding more software based
intelligent functions with this system. This is an automatic gas detection, control and alert system. In
future this system will have a feature where it can notify the emergency services if any accidents
happen. A mobile app and web-based app for real time monitoring also will be added. In the user
app for this system many smart features will be added. The overall features will make the system
more safe for the users. The system will be optimized for use in many places like the car, the home,
industries and many other places. After designing the final prototype with smart multifunctional
features, the system will be implemented in real life scenarios as a pilot project. A survey will be
done soon before using the system and another one will be done after implementing the system to
discover the KPI. Summarizing all the results, finding and analyzing a research article will be done
and author has plans to submit itto the MDPI sensors journal for review. In the future paper the
features of this final product will be compared with the available gas detector systems presented in
other articles. 
# CONCLUSION
The design of a sensor-based automatic gas leakage detector with an alert and control system
has been proposed and discussed in this paper. This is a low-cost, low power, lightweight, portable,
safe, user friendly, efficient, multi featured and simple system device for detecting gas. Gas leakage
detection will not only provide us with significance in the health department but it will also lead to
raise our economy, because when gas leaks it not only contaminates the atmosphere but also
wastage of gases will hurt our economy. The proposed system will cost only USD 10 which is easily
affordable even for poor people. In the open literatures it is noticed that much work has not been
done for a smart gas detection system. In future, more advanced features will be integrated with this
system which will provide users with more safety and relaxation. The proliferation of handheld
devices has led to developments in the field of smart gas sensors, which has considerably widened
their scope of application. The need for ensuring safety in workplaces is expected to be the key
driving force for the market over the coming years.
