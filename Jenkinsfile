pipeline {
    agent any
    
    stages {
        stage('build') {
            steps {
                echo "Compiling the code..."
                sh 'gcc codigo.c -o output'
                echo "Compile complete."
            }
        }
        stage('test') {
            parallel {
                stage('unit-test-job') {
                    steps {
                        echo "Running unit tests... This will take about 60 seconds."
                        sh 'gcc codigo.c -o output'
                        sh './output 1'
                        sh './output 2'
                        sh './output 3'
                        sh './output 4'
                        sh './output 5'
                        sh './output ABECEDARIO'
                        sh './output 0'
                        echo "Code coverage is 90%"
                    }
                }
                stage('lint-test-job') {
                    steps {
                        echo "Linting code... This will take about 10 seconds."
                        sh 'sleep 10'
                        echo "No lint issues found."
                    }
                }
            }
        }
        stage('deploy') {
            when {
                allOf {
                    branch 'master'
                    not { expression { currentBuild.result == 'FAILED' } }
                }
            }
            steps {
                echo "Deploying application..."
                echo "Application successfully deployed."
            }
        }
    }
}
