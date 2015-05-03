-- streaming
streaming = {}

-- Model Loading
function streaming.RequestModel(hash)
	natives.STREAMING.REQUEST_MODEL(hash)
end
function streaming.HasModelLoaded(hash)
	print("loaded check ", hash)
	return natives.STREAMING.HAS_MODEL_LOADED(hash)
end
function streaming.ReleaseModel(hash)
	natives.STREAMING.SET_MODEL_AS_NO_LONGER_NEEDED(hash)
end

-- Model Loading & Waiting
function streaming.RequestAndWaitForModel(thread, hash)
	print("raw ", hash)
	if streaming.HasModelLoaded(hash) then return end
	print("hm")
	streaming.RequestModel(hash)
	
	while thread:IsRunning() do
		if streaming.HasModelLoaded(hash) then return end
		thread:Wait(1)
	end
end