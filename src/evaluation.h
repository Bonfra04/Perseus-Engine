#pragma once

#include "BBmacros.h"
#include "Position.h"

const PScore materialValues[5] = {
    S(92,186), S(377,546), S(386,583), S(553,1048), S(1142,1467)
};

const PScore pawnTable[64] = {
    S(0,0)     , S(0,0)     , S(0,0)     , S(0,0)     , S(0,0)     , S(0,0)     , S(0,0)     , S(0,0)     ,
    S(87,104)  , S(45,108)  , S(80,65)   , S(101,5)   , S(84,7)    , S(48,35)   , S(-125,122), S(-87,123) ,
    S(1,123)   , S(31,108)  , S(49,66)   , S(45,19)   , S(57,18)   , S(97,51)   , S(50,86)   , S(5,97)    ,
    S(1,71)    , S(2,58)    , S(9,38)    , S(21,10)   , S(31,19)   , S(29,31)   , S(-4,58)   , S(-5,56)   ,
    S(-5,41)   , S(-11,36)  , S(3,18)    , S(12,9)    , S(15,10)   , S(15,20)   , S(-4,28)   , S(-6,28)   ,
    S(-3,30)   , S(-5,24)   , S(-1,25)   , S(7,20)    , S(18,29)   , S(2,31)    , S(9,17)    , S(1,15)    ,
    S(-6,40)   , S(-7,33)   , S(-9,40)   , S(-6,40)   , S(-9,48)   , S(13,49)   , S(17,29)   , S(-7,15)   ,
    S(0,0)     , S(0,0)     , S(0,0)     , S(0,0)     , S(0,0)     , S(0,0)     , S(0,0)     , S(0,0)     
};

const PScore knightTable[64] = {
    S(-137,25), S(-53,109), S(-69,154), S(43,123) , S(91,113) , S(-60,156), S(-57,117), S(-86,0)  ,
    S(69,80)  , S(64,108) , S(112,110), S(151,136), S(136,139), S(155,97) , S(46,109) , S(82,78)  ,
    S(52,101) , S(84,123) , S(103,160), S(99,164) , S(133,154), S(117,163), S(83,130) , S(59,110) ,
    S(83,118) , S(88,136) , S(98,166) , S(104,182), S(95,193) , S(112,168), S(79,163) , S(89,133) ,
    S(71,124) , S(79,137) , S(76,163) , S(77,173) , S(89,176) , S(81,164) , S(99,138) , S(74,134) ,
    S(42,81)  , S(54,114) , S(54,138) , S(61,161) , S(64,158) , S(51,131) , S(53,117) , S(44,89)  ,
    S(25,110) , S(22,116) , S(37,105) , S(48,125) , S(43,127) , S(37,103) , S(23,111) , S(31,111) ,
    S(3,72)   , S(38,71)  , S(30,92)  , S(29,114) , S(32,116) , S(30,103) , S(28,84)  , S(-1,61)  
};

const PScore bishopTable[64] = {
    S(11,166) , S(-14,164), S(-60,166), S(-76,173), S(-53,166), S(-82,161), S(18,150) , S(-3,163) ,
    S(8,157)  , S(65,155) , S(63,148) , S(34,149) , S(53,143) , S(55,149) , S(27,161) , S(23,152) ,
    S(64,156) , S(74,158) , S(92,150) , S(72,144) , S(87,142) , S(83,160) , S(78,154) , S(55,161) ,
    S(55,152) , S(89,147) , S(72,147) , S(96,162) , S(99,163) , S(90,147) , S(91,149) , S(49,157) ,
    S(64,132) , S(64,139) , S(64,161) , S(83,157) , S(91,159) , S(61,153) , S(70,137) , S(64,125) ,
    S(65,127) , S(76,138) , S(67,150) , S(70,152) , S(65,151) , S(66,146) , S(69,131) , S(70,131) ,
    S(75,124) , S(74,113) , S(68,128) , S(47,142) , S(47,143) , S(61,127) , S(77,120) , S(66,102) ,
    S(82,118) , S(64,133) , S(47,136) , S(38,132) , S(34,137) , S(45,142) , S(56,134) , S(72,114) 
};

const PScore rookTable[64] = {
    S(65,223) , S(55,231) , S(27,243) , S(33,234) , S(30,238) , S(64,233) , S(77,229) , S(87,222) ,
    S(38,221) , S(23,232) , S(47,227) , S(60,226) , S(47,231) , S(69,210) , S(38,221) , S(55,214) ,
    S(32,211) , S(84,192) , S(61,207) , S(94,185) , S(105,180), S(94,197) , S(122,177), S(65,199) ,
    S(29,200) , S(52,197) , S(63,196) , S(87,184) , S(76,188) , S(76,189) , S(78,191) , S(60,193) ,
    S(5,180)  , S(11,197) , S(11,197) , S(23,188) , S(16,188) , S(17,195) , S(38,191) , S(21,175) ,
    S(-1,156) , S(17,173) , S(8,173)  , S(21,164) , S(19,166) , S(18,169) , S(50,161) , S(18,144) ,
    S(-28,157), S(15,151) , S(15,160) , S(24,152) , S(23,151) , S(35,144) , S(43,137) , S(-20,149),
    S(19,151) , S(23,161) , S(28,163) , S(37,153) , S(34,151) , S(38,166) , S(42,152) , S(30,133) 
};

const PScore queenTable[64] = {
    S(111,278), S(120,299), S(104,330), S(103,319), S(86,345) , S(107,350), S(114,317), S(120,283),
    S(125,283), S(63,345) , S(112,325), S(45,382) , S(33,414) , S(110,358), S(47,380) , S(133,303),
    S(129,297), S(129,301), S(115,330), S(112,337), S(119,353), S(124,371), S(132,339), S(122,359),
    S(139,289), S(140,322), S(126,311), S(112,373), S(111,380), S(142,364), S(154,353), S(154,320),
    S(142,249), S(140,292), S(129,309), S(129,351), S(131,344), S(136,329), S(154,301), S(152,274),
    S(145,224), S(155,255), S(146,293), S(142,290), S(144,277), S(147,299), S(163,262), S(160,222),
    S(146,219), S(155,221), S(163,213), S(158,248), S(159,239), S(176,189), S(170,195), S(147,209),
    S(150,206), S(157,205), S(160,207), S(167,240), S(167,205), S(158,188), S(167,181), S(152,183)
};

const PScore kingTable[64] = {
    S(-17,-209), S(34,-74)  , S(49,-50)  , S(58,-25)  , S(63,-39)  , S(63,-36)  , S(82,-42)  , S(3,-202)  ,
    S(-55,-35) , S(47,53)   , S(106,31)  , S(156,-3)  , S(125,5)   , S(149,24)  , S(78,58)   , S(14,-40)  ,
    S(-6,15)   , S(145,55)  , S(164,49)  , S(124,42)  , S(146,34)  , S(215,42)  , S(164,53)  , S(43,-3)   ,
    S(-48,16)  , S(92,39)   , S(114,56)  , S(76,61)   , S(95,54)   , S(127,49)  , S(92,36)   , S(-55,3)   ,
    S(-62,-20) , S(48,19)   , S(92,39)   , S(40,63)   , S(65,53)   , S(74,32)   , S(59,9)    , S(-68,-22) ,
    S(-72,-8)  , S(-4,9)    , S(22,25)   , S(-5,50)   , S(14,42)   , S(17,21)   , S(6,-3)    , S(-51,-20) ,
    S(-2,-23)  , S(-19,2)   , S(-32,21)  , S(-92,36)  , S(-70,29)  , S(-62,28)  , S(-9,-7)   , S(-1,-44)  ,
    S(-17,-104), S(-1,-44)  , S(-42,-6)  , S(-111,-17), S(-68,-41) , S(-103,-1) , S(-4,-46)  , S(8,-134)  
};

const PScore knightMob[9] = {
    S(-25,-119), S(-7,-43), S(6,4), S(12,30), S(17,39), S(22,52), S(30,50), S(40,43), S(51,17)
};

const PScore bishopMob[14] = {
    S(-43,-184), S(-11,-105), S(6,-49), S(13,-21), S(23,0), S(29,18), S(32,29), S(30,38), S(31,47), S(35,49), S(44,41), S(68,26), S(77,30), S(106,-13)
};

const PScore rookMob[15] = {
    S(-28,-138), S(-32,-76), S(-22,-42), S(-22,-24), S(-22,-6), S(-24,15), S(-21,22), S(-16,24), S(-13,28), S(-4,34), S(-5,40), S(0,46), S(3,48), S(20,27), S(80,-3)
};

const PScore queenMob[28] = {
    S(-170,-271), S(-126,-354), S(-86,-263), S(-66,-178), S(-62,-81), S(-57,-29), S(-52,5), S(-48,22), S(-44,41), S(-40,53), S(-36,60), S(-31,64), S(-27,67), S(-24,70), S(-22,70), S(-21,72), S(-24,72), S(-28,77), S(-26,74), S(-25,70), S(-13,51), S(-7,36), S(-9,30), S(9,8), S(-15,13), S(10,-16), S(-8,11), S(-13,42)
};

extern const PScore* pestoTables[6];

constexpr Score gamephaseInc[12] = { 0, 1, 1, 2, 4, 0, 0, 1, 1, 2, 4, 0 };
extern PScore PSQTs[12][64];
/**
* @brief The initTables function initializes the material - positional tables
* @note This function is called once at the beginning of the program
*/
void initTables();

/**
 * @brief The pestoEval function evaluates the material and positional scores
 * @param pos The position to evaluate
 * @return The material and positional scores
 */
Score pestoEval(Position* pos);

/** 
 * @brief The initTropism function initializes the tropism tables
 * @note This is called at the start of the program 
 */
void initTropism();

/**
 * @brief The convertToFeatures function converts a set of positions to a set of features
 * @param filename The filename of the epd file
 * @param output The output file to write the features to
 */
void convertToFeatures(std::string filename, std::string output);