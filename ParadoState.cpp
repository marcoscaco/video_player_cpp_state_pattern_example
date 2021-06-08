#include "ParadoState.h"
#include "VideoPlayer.h"

ParadoState::ParadoState()
: VideoPlayerState(std::string("PARADO")) {
}

ParadoState::~ParadoState() {
}

void ParadoState::Tocar(VideoPlayer * player)
{
	player->SetState(VideoPlayer::ST_PLAYING);
}


