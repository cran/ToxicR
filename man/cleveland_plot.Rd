% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/cleveland_plot.R
\name{cleveland_plot}
\alias{cleveland_plot}
\title{cleveland_plot - Create a Cleveland plot from a model averaged model.}
\usage{
cleveland_plot(A)
}
\arguments{
\item{A}{the model averaged model to plot}
}
\value{
Returns a \code{ggplot2} graphics object.
}
\description{
Create a Cleveland plot from a model averaged model.
}
\examples{
\donttest{ 
mData <- matrix(c(0, 2,50,
                  1, 2,50,
                  3, 10, 50,
                  16, 18,50,
                  32, 18,50,
                  33, 17,50),nrow=6,ncol=3,byrow=TRUE)
D <- mData[,1]
Y <- mData[,2]
N <- mData[,3]

model = ma_dichotomous_fit(D,Y,N)
cleveland_plot(model)
}
}
