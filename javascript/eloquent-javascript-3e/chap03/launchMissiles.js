let launchMissiles = function () {
  missileSystem.launch('now');
};

if (safeMode) {
  launchMissiles = function () { /* 아무것도 하지 않음 */ };
}
