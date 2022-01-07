db.users.update({ name: 'zero' }, {
    $set: {
        comment: '안녕하세요. 이 필드를 바꿔보겠습니다.',
    },
});
