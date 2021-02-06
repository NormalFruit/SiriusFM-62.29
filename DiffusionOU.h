#pragma once
#include <stdexcept>

namespace SiriusFM {
	class DiffusionOU {
	private:
    		double const m_cappa;
    		double const m_theta;
    		double const m_sigma;
    	public:
        	double mu(double a_s, double a_t) {
        		return m_mu * a_s
        	}
        	double sigma(double a_s, double a_t) {
            		if (a_s < 0) return 0.0;
            		return m_mu * a_s
        	}
    		DiffusionOU(double a_mu, double a_sigma)
    		:m_mu(a_mu);
     		 m_sigma(a_sigma);
     		 {
     		 if (m_sigma <= 0) throw std::invalid_argument('...')
     		 }
     
    	};
}
