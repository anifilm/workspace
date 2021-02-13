while (funds > 1 && funds < 100) {
    let totalBet = rand(1, funds);
    if (totalBet === 13) {
        console.log("Unluckey! Skip this round...");
        continue;
    }
    // 플레이...
}
