#ifndef VideoPlayer_H_
#define VideoPlayer_H_

class VideoPlayerState;

class VideoPlayer {
public:
	enum State
	{
		ST_STOPPED,
		ST_PLAYING,
		ST_PAUSED
	};

	VideoPlayer();
	virtual ~VideoPlayer();

	void Tocar();
	void Pausar();
	void Parar();

	void SetState(State state);

private:
	VideoPlayerState * m_pState;
};

#endif /* VideoPlayer_H_ */
