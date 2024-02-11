#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>

#include "Enemy.h"

int main(int argc, const char* argv[]) {
	Enemy* enemy = new Enemy();

	enemy->Update();

	if (enemy->GetPhase() == Enemy::Phase::Approach) {
		enemy->SetPhase(Enemy::Phase::Leave);
	}

	enemy->Update();

	return 0;
}