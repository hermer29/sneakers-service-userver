# Start via `make test-debug` or `make test-release`
async def test_basic(service_client):
    response = await service_client.post('/auth', params={'login': 'Tester', 'password': '1234'})
    assert response.status == 200
    assert response.text == "Hello, Tester1234!\n"
