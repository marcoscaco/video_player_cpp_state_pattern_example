#ifndef VideoPlayerSTATE_H_
#define VideoPlayerSTATE_H_

#include <string>

class VideoPlayer;

class VideoPlayerState {
public:
	VideoPlayerState(std::string name);
	virtual ~VideoPlayerState();

	virtual void Tocar(VideoPlayer * player);
	virtual void Pausar(VideoPlayer * player);
	virtual void Parar(VideoPlayer * player);

	std::string GetName() { return m_name; }

private:
	std::string   m_name;
};

#endif /* VideoPlayerSTATE_H_ */
