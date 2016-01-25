<?php 

set_time_limit(0);


function addNode($title, $content, $date) {
	$node = new stdClass();
	$node->type = 'test_perf_1';
	node_object_prepare($node);
	$node->language = LANGUAGE_NONE;
	$node->uid = 1;
	$node->changed_by = 1;
	$node->status = 1;
	
	$node->created = time() - mt_rand(1000,1451610061);

	$node->title = $title;
	$node->body[LANGUAGE_NONE][0] = array(
		'value'=>$content,
		'format'=>'full_html'
	);
	
	$node->field_test_date[LANGUAGE_NONE][0] = array(
		'value' => $date,
		'timezone' => 'UTC',  
		'timezone_db' => 'UTC'
	);

	node_save($node);	
}


for($i=0; $i<5000; $i++) {
	addNode(
		'dummy node ' . $i,
		'<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi convallis mi quis finibus vulputate. Etiam auctor eros sed posuere viverra. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Donec quis risus vulputate, tempor augue non, molestie arcu. Nulla a lectus lorem. Donec pretium magna eget efficitur tempus. Ut vel risus cursus, rhoncus nunc eu, vulputate ex. Sed placerat euismod augue in venenatis. Suspendisse condimentum, odio eget vehicula imperdiet, eros eros vulputate nunc, aliquam tincidunt erat ipsum in lacus.</p>',
		date("Y-m-d H:i:s", mt_rand(1000,1451610061)) // https://stackoverflow.com/a/1972717/72478
	);
}