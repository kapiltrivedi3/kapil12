var Person = function (firstName) {  
this.firstName = firstName; 
console.log('Person instantiated');
};
var person1 = new Person('Alice');
var person2 = new Person('Bob');// Show the firstName properties of the objects
console.log('person1 is ' + person1.firstName); // logs "person1 is Alice"
console.log('person2 is ' + person2.firstName); // logs "person2 is Bob"


app.factory('SimpleGithubUser', function($http) {
 
    var apiUrl = 'Page on github.com';
 
    // instantiate our initial object
    var SimpleGithubUser = function(username) {
        this.username = username;
        this.profile = null;
    };
 
    SimpleGithubUser.prototype.getProfile = function() {
 
        var self = this;
 
        return $http.get(apiUrl + 'users/' + this.username).then(function(response) {
 
            // get the results and store the data in user.profile
            self.profile = response.data
 
            return response;
 
        });
    };
    return SimpleGithubUser;
})

// inject our factory
app.controller('MyCtrl', function(SimpleGithubUser) {
    // instantiate a new user
    var user = new SimpleGithubUser('substack');
    // fetch data and publish on scope
    user.getProfile().then(function() {
        $scope.userLogin = user.profile.login;
    })
});