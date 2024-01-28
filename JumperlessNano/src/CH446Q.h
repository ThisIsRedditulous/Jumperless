// SPDX-License-Identifier: MIT
#ifndef CH446Q_H
#define CH446Q_H


extern int netNumberC2;
extern int onOffC2;
extern int nodeC2;
extern int brightnessC2;
extern int hueShiftC2;
extern int lightUpNetCore2;


void initCH446Q(void);

void sendAllPaths(void); // should we sort them by chip? for now, no
void resetArduino (void);
void sendPath(int path, int setOrClear = 1);

void createXYarray(void);

#endif
