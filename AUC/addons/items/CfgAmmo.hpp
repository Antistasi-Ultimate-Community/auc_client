class B_45ACP_Ball;
class AUC_45ACP_EXP: B_45ACP_Ball
{
    soundHit1[]=
    {
        "A3\Sounds_F\weapons\Explosion\gr_explosion_1",
        3.1622777,
        1,
        1600
    };
    soundHit2[]=
    {
        "A3\Sounds_F\weapons\Explosion\gr_explosion_2",
        3.1622777,
        1,
        1600
    };
    soundHit3[]=
    {
        "A3\Sounds_F\weapons\Explosion\gr_explosion_3",
        3.1622777,
        1,
        1600
    };
    soundHit4[]=
    {
        "A3\Sounds_F\weapons\Explosion\gr_explosion_4",
        3.1622777,
        1,
        1600
    };
    soundHit5[]=
    {
        "A3\Sounds_F\weapons\Explosion\gr_explosion_5",
        3.1622777,
        1,
        1600
    };
    soundHit6[]=
    {
        "A3\Sounds_F\weapons\Explosion\gr_explosion_6",
        3.1622777,
        1,
        1600
    };
    multiSoundHit[]=
    {
        "soundHit1",
        0.2,
        "soundHit2",
        0.2,
        "soundHit3",
        0.2,
        "soundHit4",
        0.1,
        "soundHit5",
        0.15000001,
        "soundHit6",
        0.15000001
    };
    explosive=1;
    explosionEffects="AUC_Exp_AmmoExplosion";
    craterEffects="AUC_Exp_AmmoImpact";
    hit=100;
    indirectHit=4;
    indirectHitRange=1.5;
    warheadName="HE";
    visibleFire=16;
    audibleFire=18;
    visibleFireTime=3;
    cost=20;
    deflecting=0;
    airFriction=-0.0010000004;
    fuseDistance=3;
    typicalSpeed=400;
    model="\A3\Weapons_f\Data\bullettracer\tracer_white";
    tracerScale=1;
    tracerStartTime=0.050000001;
    tracerEndTime=1;
    class CamShakeExplode
    {
        power="(19 * 0.2)";
        duration="((round (19^0.5))*0.2 max 0.2)";
        frequency=20;
        distance="((2 + 19^0.5)*8)";
    };
};