#include "VideoPlayerState.h"

#include <iostream>

VideoPlayerState::VideoPlayerState(std::string name)
: m_name(name)
{

}

VideoPlayerState::~VideoPlayerState() = default;

void VideoPlayerState::Tocar(VideoPlayer * player)
{
	std::cout << "A transição de " << GetName() << " para Tocando é ilegal\n";
}

void VideoPlayerState::Pausar(VideoPlayer * player)
{
	std::cout << "A transição de " << GetName() << " para Pausado é ilegal\n";
}

void VideoPlayerState::Parar(VideoPlayer * player)
{
	std::cout << "A transição de " << GetName() << " para Parar é ilegal\n";
}
