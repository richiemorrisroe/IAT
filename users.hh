<?hh
class Person {
  public function __construct(int $uid,
                              string $email,
                              ?Vector<int> $tests_taken) {
    this->$uid = $uid;
    this->$email = $email;
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
$new_person = new Person(1, "somebody@foobar.com");
var_dump($new_person);
