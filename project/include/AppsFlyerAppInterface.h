#ifndef APPSFLYEREXTENSION_H
#define APPSFLYEREXTENSION_H
#include <string>

namespace appsflyerextension {
	void StartTracking(std::string devkey, std::string appId);
	void TrackAppLaunch();
	void TrackEvent(std::string eventName, std::string eventData);
	void Init();
}


#endif
