<?hh
$stimwords = Vector {"Creams", "Pills", "Surgery", "Injections",
                 "Homeopathy", "Acupuncture", "Reiki", "Flower Essence"};
$contrast_words = Vector {"Real", "Accurate", "True",
                 "Fake", "Inaccurate", "False"};
/* my first class, weird enough as that may seem */
class IAT {
  public function __construct(Vector<string> $stim_words,
                              Vector<string> $contrast_words,
                              int $num_blocks,
                              int $num_trials,
                              ?int $stimblock_length,
                              ?int $contrast_block_length) {
    /* $stim_words = Vector{}; */
    /* $contrast_words =  Vector {}; */
    $this->$stim_words = $stim_words;
    $this->$contrast_words = $contrast_words;
    $this->$stimblock_length = count($stim_words);
    $this->$contrast_block_length = count($contrast_words);
    
    
  }
  /* private Map<string,int> $blocklength = Map */
  /*   { */
      
  /*                    "stimblock"=>count(this->$stim_words), */
  /*                    "realblock"=>count($contrast_words), */
  /*                    "fullblock"=> count($stimwords)+count($contrast_words); */
  /*   } */
  
  public function shuffle(Vector<string> $stimwords,
                          Vector<string> $contrast_words): Vector<string> {
    $all_words = $stimwords->addAll($contrast_words);
    $all_words->shuffle();
    return $all_words;
    
  }
  
}
$myiat = new IAT($stimwords, $contrast_words, 5, 12);

/* public function get_stimuli(IAT iat): Map<string, Vector<string>  */
/* { */
/*   if(!iat)  */
/*     { */
      


//there really must be a better way to do this
/* $allwords = Set {"Creams", "Pills", "Surgery", "Injections", */
/*                   "Homeopathy", "Acupuncture", "Reiki", "Flower Essence", */
/*                   "Real", "Accurate", "True", */
/*                  "Fake", "Inaccurate", "False"}; */
/* echo count($stimwords) . "\n"; */
/* echo count($realwords) . "\n"; */
/* $blocklength = Array( */
/*                      "stimblock"=>count($stimwords), */
/*                      "realblock"=>count($contrast_words), */
/*                      "fullblock"=> count($allwords)); */

/* $vec_stims =$stimwords->toVector(); */
/* var_dump($vec_stims->keys()); */
/* $rand_num = array_map($x ==> mt_rand(0, 7), */
/*                       Array(0, 0, 0, 0, 0, 0, 0, 0)); */
/* var_dump($rand_num); */
/* $new_vec = Vector{}; */
/* $keys_stim = Array($vec_stims->keys()); */
/* var_dump($keys_stim); */
/* foreach($keys_stim as $index) { */
/*   $tmp = $vec_stims->get($index); */
/*   $new_vec->add($tmp); */
/*   return($new_vec); */
/*  } */
  

/* var_dump($myiat); */

/* var_dump($stimwords); */
/* var_dump($contrast_words); */
/* var_dump($myiat); */
/* var_dump($myiat->shuffle($stimwords, $contrast_words)); */


