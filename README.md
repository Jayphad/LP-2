python -V
curl https://sdk.cloud.google.com | bash
gcloud init
git clone https://github.com/GoogleCloudPlatform/python-docs-samples
cd python-docs-samples/appengine/standard/hello_world
dev_appserver.py
Then localhost:8080 window will open
