var settings = {
	"async": true,
	"crossDomain": true,
	"url": "https://garrylachman-youtube-viral-videos-v1.p.rapidapi.com/mashape.php?action=undefined",
	"method": "GET",
	"headers": {
		"x-rapidapi-host": "garrylachman-youtube-viral-videos-v1.p.rapidapi.com",
		"x-rapidapi-key": "840f22a4b5mshd4a49ff784f0ef7p1f2b9djsnfd9e0111a171"
	}
}

$.ajax(settings).done(function (response) {
	console.log(response);
});
