#pragma once
#include <string>
#include <vector>
enum atkType{
    Sever,
    Blunt,
    Pierce,
    Typeless
};
typedef struct atkData
{
    std::string name;
    atkType rawType;
    double mv;
    double stun;
    double exhaust;
    double mount;
    double partModifier;
    double elemModifier;
    double statusModifier;
    bool mindsEye;
    std::string notes;
};


class GreatSwordAttacks {
public:
    static inline const std::vector<atkData> ATTACKS = {
        {"Overhead Sever", Sever, 48, 0, 0, 0, 1.00, 1.00, 1.00, false, ""},
        {"Side Blow", Blunt, 16, 20, 15, 0, 1.00, 1.00, 1.00, false, ""},
        {"Charged Sever Lv1", Sever, 48, 0, 0, 0, 1.00, 1.00, 1.00, false, ""},
        {"Charged Sever Lv2", Sever, 77, 0, 0, 0, 1.00, 1.30, 1.30, false, ""},
        {"Charged Sever Lv3", Sever, 110, 0, 0, 0, 1.00, 1.50, 1.50, false, ""},
        {"Strong Charged Sever Lv1", Sever, 82, 0, 0, 0, 1.00, 1.40, 1.40, false, ""},
        {"Strong Charged Sever Lv2", Sever, 111, 0, 0, 0, 1.00, 1.50, 1.50, false, ""},
        {"Strong Charged Sever Lv3", Sever, 131, 0, 0, 0, 1.00, 1.70, 1.70, false, ""},
        {"Strong Wide Sever Lv1", Sever, 59, 0, 0, 0, 1.00, 1.00, 1.00, false, ""},
        {"Strong Wide Sever Lv2", Sever, 66, 0, 0, 0, 1.00, 1.30, 1.30, false, ""},
        {"Strong Wide Sever Lv3", Sever, 78, 0, 0, 0, 1.00, 1.50, 1.50, false, ""},
        {"True Charge Sever Lv1 (1st Hit)", Sever, 15, 0, 0, 0, 0.00, 1.00, 1.00, true, ""},
        {"True Charge Sever Lv2 (1st Hit)", Sever, 20, 0, 0, 0, 0.00, 1.00, 1.00, true, ""},
        {"True Charge Sever Lv3 (1st Hit)", Sever, 22, 0, 0, 0, 0.00, 1.00, 1.00, true, ""},
        {"True Charge Sever Lv1 (2nd Hit)", Sever, 120, 0, 0, 0, 1.00, 1.40, 1.40, true, ""},
        {"True Charge Sever Lv2 (2nd Hit)", Sever, 175, 0, 0, 0, 1.00, 1.50, 1.50, true, ""},
        {"True Charge Sever Lv3 (2nd Hit)", Sever, 211, 0, 0, 0, 1.50, 1.70, 1.70, true, ""},
        {"[Power] True Charge Sever Lv1 (2nd Hit)", Sever, 144, 0, 0, 0, 1.10, 1.40, 1.40, true, ""},
        {"[Power] True Charge Sever Lv2 (2nd Hit)", Sever, 210, 0, 0, 0, 1.20, 1.50, 1.50, true, ""},
        {"[Power] True Charge Sever Lv3 (2nd Hit)", Sever, 264, 0, 0, 0, 1.30, 1.80, 1.80, true, ""},
        {"Kick", Blunt, 5, 10, 5, 0, 1.00, 0.00, 0.00, true, ""},
        {"Tackle Lv1", Blunt, 26, 30, 20, 0, 1.20, 0.00, 0.00, true, ""},
        {"Tackle Lv2", Blunt, 35, 40, 25, 0, 1.30, 0.00, 0.00, true, ""},
        {"Tackle Lv3", Blunt, 48, 55, 30, 0, 1.50, 0.00, 0.00, true, ""},
        {"Wide Sever", Sever, 26, 0, 0, 0, 1.00, 1.00, 1.00, false, ""},
        {"Rising Sever", Sever, 38, 0, 0, 0, 1.00, 1.00, 1.00, false, ""},
        {"Side Blow (v2)", Blunt, 18, 30, 20, 0, 1.00, 1.00, 1.00, false, "Used after Strong Charged Slash only."},
        {"Wide Sever (v2)", Sever, 29, 0, 0, 0, 1.00, 1.00, 1.00, false, "Used after Strong Wide Slash only."},
        {"Rising Sever (v2)", Sever, 41, 0, 0, 0, 1.00, 1.00, 1.00, false, "Used after Strong Charged Slash only."},
        {"Jumping Wide Sever Lv1", Sever, 75, 0, 0, 0, 1.00, 2.20, 2.20, true, ""},
        {"Jumping Wide Sever Lv2", Sever, 96, 0, 0, 0, 1.00, 3.15, 3.15, true, ""},
        {"Jumping Wide Sever Lv3", Sever, 118, 0, 0, 0, 1.00, 3.50, 3.50, true, ""},
        {"Mid-Air Charged Sever Lv1 / Jumping Sever", Sever, 58, 0, 0, 55, 1.00, 1.00, 1.00, true, ""},
        {"Mid-Air Charged Sever Lv2", Sever, 69, 0, 0, 80, 1.00, 1.10, 1.10, true, ""},
        {"Mid-Air Charged Sever Lv3", Sever, 87, 0, 0, 100, 1.00, 1.20, 1.20, true, ""},
        {"Charged Rising Sever Lv1", Sever, 48, 0, 0, 0, 1.00, 1.00, 1.00, true, ""},
        {"Charged Rising Sever Lv2", Sever, 72, 0, 0, 0, 1.00, 1.30, 1.30, true, ""},
        {"Charged Rising Sever Lv3", Sever, 98, 0, 0, 0, 1.00, 1.50, 1.50, true, ""},
        {"Plunging Thrust Lv1", Sever, 16, 0, 0, 20, 1.00, 0.20, 0.20, true, "Multiple hits (~0.153s per hit)."},
        {"Plunging Thrust Lv2", Sever, 22, 0, 0, 20, 1.00, 0.25, 0.25, true, "Multiple hits (~0.153s per hit)."},
        {"Plunging Thrust Lv3", Sever, 27, 0, 0, 20, 1.00, 0.30, 0.30, true, "Multiple hits (~0.153s per hit)."},
        {"[Clutching] Weapon Attack (1st Hit)", Sever, 48, 0, 0, 0, 0.00, 1.00, 1.00, true, ""},
        {"[Clutching] Weapon Attack (2nd Hit)", Sever, 6, 0, 0, 0, 0.00, 1.00, 1.00, true, "Applies 30 Soften buildup."},
        {"[Clutching] Weapon Attack (Repeated)", Sever, 6, 0, 0, 0, 0.00, 0.50, 0.50, true, "Applies 40 Soften buildup on only the first hit. Multiple hits (~0.150s per hit)."},
        {"[Clutching] Weapon Attack (Final Hit)", Sever, 60, 0, 0, 0, 1.00, 1.00, 1.00, true, ""},
        {"[Mounting] Charged Sever Lv1 (1st Hit)", Sever, 100, 0, 0, 0, 0.00, 1.00, 1.00, true, ""},
        {"[Mounting] Charged Sever Lv2 (1st Hit)", Sever, 122, 0, 0, 0, 0.00, 1.30, 1.30, true, ""},
        {"[Mounting] Charged Sever Lv3 (1st Hit)", Sever, 139, 0, 0, 0, 0.00, 1.50, 1.50, true, ""},
        {"[Mounting] Charged Sever Lv1 (2nd Hit)", Sever, 58, 0, 0, 0, 1.00, 1.00, 1.00, true, ""},
        {"[Mounting] Charged Sever Lv2 (2nd Hit)", Sever, 72, 0, 0, 0, 1.00, 1.30, 1.30, true, ""},
        {"[Mounting] Charged Sever Lv3 (2nd Hit)", Sever, 89, 0, 0, 0, 1.00, 1.50, 1.50, true, ""}
    };
};

//jesus fuck HBG and LBG are going to be a royal pain in the ass to implement
