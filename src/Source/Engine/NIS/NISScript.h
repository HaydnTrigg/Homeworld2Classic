#if 0
#ifndef __NISSCRIPT_H__
#define __NISSCRIPT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NISScript
{
public:
    NISScript(NIS *);
    ~NISScript();
    void luaSetup();
    void luaReset();
    void start();
    bool isWideScreenOut();
    void runCode(MotionFollower *, Sob *, char const *);
    void wideScreenIn(float);
    void wideScreenOut(float);
    void nisOut(float);
    void fadeTo(float, float);
    void fadeSet(float);
    void displayCard(char const *, float, float, float, float, float, float, float);
    void hide();
    void show();
    void invincible();
    void vincible();
    void cameraCut(char const *);
    void cameraBlendIn(char const *, float);
    void cameraFadeIn(char const *, float, float, float);
    void cameraLeave();
    void musicStart(char const *);
    void musicStartFade(char const *, float);
    void musicStop(float);
    void musicStartAtEnd(char const *);
    void death(char const *);
    void attack(char const *);
    void haltAttack();
    void hyperspaceIn();
    void hyperspaceOut();
    void setInHyperspace();
    void fire();
    void musicVolume(float);
    void speechVolume(float);
    void SFXVolume(float);
    void soundEvent(char const *);
    void speechEvent(char const *, float);
    void fleetSpeechEvent(char const *);
    void speechSetDir(char const *);
    void health(float);
    void lockLOD(bool);
    void remainAtEnd(char const *);
    void keepMovingAtEnd(char const *);
    void meshAnimStart(char const *);
    void meshAnimStop(char const *);
    void meshAnimPause(char const *);
    void setMADState(char const *);
    void newNIS(char const *);
    void focusAtEnd();
    void focus();
    void pauseUniverse(bool);
    void hideUniverse(bool);
    void trailZero();
    void trailMove();
    void engineSoundVolume(float);
    void ambientSoundVolume(float);
    void navlightSpeed(float);
    void navlightPower(float);
    void startEffectEvent(char const *);
    void setEnginePower(float);
    void setBridgePower(float);
    void triggerEffect(float);
    void destroyEffect();
    void setPlayer(float);
    void setResourceValue(float);
    void SMPTEOn(char const *, float, float);
    void SMPTEOff();
    void runScar(char const *);
    void stayFadedAtEnd();
    class Data;
private:
    NISScript::Data *m_pimpl; // 0x0
};
static_assert(sizeof(NISScript) == 4, "Invalid NISScript size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NISSCRIPT_H__
#endif
