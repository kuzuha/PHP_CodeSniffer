<?php

function test()
{
    $a = [];

    $b = [];

    $c = [
            'a' => 1,
         ];
}


class TestClass
{
    public $good = [
                    'width'  => '',
                    'height' => '',
                   ];

    private $_bad = [
                    'width' => '',
                    'height' => ''
                     ];


    public function test()
    {
        $truck = [
                 'width' => '',
                  'height' => '',
                 ];

        $plane = [
                'width' => '',
                  'height' => '',
                 ];

        $car = [
                'width' => '',
                'height' => '',
               ];

        $bus = [
                'width'  =>   '',
                'height' => ''
               ];

        $train = [
                   TRUE,
                  FALSE,
                  'aaa'
                 ];

        $inline = ['aaa', 'bbb', 'ccc'];
        $inline = ['aaa'];
        $inline = ['aaa'];

        $bigone = [
                   'name' => 'bigone',
                   'children'   => [
                                    '1a' => 'child',
                                    '11b' => 'child',
                                    '111c'      => 'child',
                                    'children'  => [
                                                    'child' => 'aaa',
                                                   ],
                                   ],
                   'short_name' => 'big'
                  ];
    }

}//end class

$value = [ ];
$value = [  ];
$value = ['1'=>$one, '2'  =>  $two, '3'=> $three, '4' =>$four];
$value = ['1'=>$one];

if (in_array('1', ['1','2','3']) === TRUE) {
    $value = in_array('1', ['1'  ,   '2',     '3','4']);
}

$value = [
          '1'=> TRUE,
          FALSE,
          '3' => 'aaa',];

$value = [
          '1'=> TRUE,
          FALSE,
         ];

$value = [
          TRUE,
          '1' => FALSE,
         ];

$value = [1,
          2 ,
          3 ,
         ];

$value = [1 => $one,
          2 => $two ,
          3 => $three ,
         ];

$value = [
          'tag'   => $tag,
          'space' => $this->_getIndentation($tag, $tagElement),
         ];

$expected = [
             [
              '1' => 1,
              '1' => 2,
             ],
            ];

$expected = [
             [
              '1' => 1,
              '1' => 2
             ]
            ];

// Space in second arg.
$args = [
         '"'.$this->id.'"',
         (int) $hasSessions,
        ];

// No errors.
$paths = [
          Init::ROOT_DIR.'/Systems'   => 'Systems',
          Init::ROOT_DIR.'/Installer' => 'Systems',
         ];

$x = [
     ];

$x = ['test'
     ];
$x = ['test',
     ];
$x = ['name' => 'test',
     ];

$x = [
      $x,
     ];

$func = [
         $x,
         'get'.$x.'Replacement'
        ];

$array = [
          'input_one' => 'one',
          'inputTwo'  => 'two',
          'input_3'   => 3,
         ];

$array = [
          'input_one',
          'inputTwo',
          'input_3',
         ];

// Malformed
$foo = [1
, 2];

$listItems[$aliasPath] = ['itemContent' => implode('<br/>', $aliases)];

$listItems[$aliasPath] = [
                          'itemContent' => implode('<br/>', $aliases)
                         ];

$x = 
     [
      $x,
      $y,
     ];

$x =
[
      $x,
      $y,
     ];

$x = [

      $x,
      $y,
     ];

$test = [
         'test' => TestFunction::blah(
             $value1,
             $value2
         ),
        ];

$c = ['a' => 1,];
$c->{$var}[ ] = 2;

$foo = ['[',']',':',"\n","\r"];
$bar = ['&#91;','&#93;','&#58;','&#10;','&#13;'];

function foo()
{
    return [$a, $b->screen];
}
