class CfgDebriefing
{
    class kick_generic
    {
        description = "You have been kicked.";
        subtitle = "Kicked to lobby.";
        title = "Kicked to lobby.";
        showScore = 0;
        // picture = QPATHTOFOLDER(data\kick_image_co.jpg);
        pictureBackground = "";
    };
    class kick_forbidden_mods : kick_generic
    {
        description = "You have forbidden mods loaded. You know which ones! If you don't know why you have got this message, contact us on discord.gg/antistasiultimate";
        subtitle = "CHEATER ALERT!";
        title = "CHEATER ALERT!";
    };
    class kick_update : kick_generic
    {
        description = "Your version does not match the server version. Try repairing the AUC Client Mod in your launcher. Should issues persist, contact us on discord.gg/antistasiultimate";
        subtitle = "VERSION MISMATCH.";
        title = "VERSION MISMATCH.";
    };
};