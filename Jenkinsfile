stages:          
  - build
  - test
  - deploy
 
build-job:       # This job runs in the build stage, which runs first.
  stage: build
  script:
    - echo "Compiling the code..."
    - gcc codigo.c -o output
    - echo "Compile complete."
 
unit-test-job:   # This job runs in the test stage.
  stage: test    # It only starts when the job in the build stage completes successfully.
  script:
    - echo "Running unit tests... This will take about 60 seconds."
    - gcc codigo.c -o output
    - ./output 1
    - ./output 2
    - ./output 3
    - ./output 4
    - ./output 5
    - ./output ABECEDARIO
    - ./output 0
    - echo "Code coverage is 90%"
 
lint-test-job:   # This job also runs in the test stage.
  stage: test    # It can run at the same time as unit-test-job (in parallel).
  script:
    - echo "Linting code... This will take about 10 seconds."
    - sleep 10
    - echo "No lint issues found."
 
deploy-job:      # This job runs in the deploy stage.
  stage: deploy  # It only runs when *both* jobs in the test stage complete successfully.
  environment: production
  script:
    - echo "Deploying application..."
    - echo "Application successfully deployed."
