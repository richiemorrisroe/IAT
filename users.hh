<?hh 
class Person {
  public function __construct(int $uid,
                              string $email,
                              ?Vector<int> $tests_taken) {
    $this->$uid = $uid;
    $this->$email = $email;
    if($tests_taken) {
      $this->$tests_taken = $tests_taken;
    }
  }
}
class Researcher extends Person {
  public  function __construct(int $uid,
                               string $email,
                               ?Vector<int> $tests_taken,
                               int $rid,
                               ?Vector<int> $tests_developed ) {
    parent::__construct($uid, $email, $tests_taken);
  }
}
$new_person = new Person(1, "somebody@foobar.com", NULL);
var_dump($new_person);
$new_researcher = new Researcher(1, "somebody@foobar.com", NULL, 4, NULL);
var_dump($new_researcher);
  
