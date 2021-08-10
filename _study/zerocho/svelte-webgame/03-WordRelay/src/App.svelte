<script>
	let word = '바보';
	let newWord;
	let message = '';

	function handleClick() {
		newWord = newWord.trim();
		if (newWord === '' || word[word.length-1] !== newWord[0]) {
			message = `'${newWord}'은(는) 올바른 단어가 아닙니다.`;
			newWord = '';
			return;
		}
		console.log(newWord);
		word = newWord;
		newWord = '';
		message = '';
	}
</script>

<main>
	<p>제시어: {word}</p>
	<form>
		<input type="text" bind:value={newWord} />
		<button on:click|preventDefault={handleClick}>입력</button>
	</form>
	<p style="color: red">{message}</p>
</main>
