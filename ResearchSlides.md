---
marp: true
theme: gradient
paginate: true
---

# Dynamic Task Assignment of Multiple Heterogeneous Autonomous Aerial Vehicles Based on Consensus With Uncertainties

## Weinan Wu<sup>1,2</sup>, Zeyu Lu<sup>1</sup>, Yiming Sun<sup>1</sup>, Marcelo H. Ang<sup>2</sup>, Chunlin Gong<sup>1</sup>

### <sup>1</sup> Northwestern Polytechnical University
### <sup>2</sup> National University of Singapore

---
![bg left](image.png)

# Introduction

 AAV systems are increasingly important for complex missions.
* Many applications require multivehicle task assignments (e.g., disaster relief, surveillance).
* Coordinated operation of vehicles is crucial.
* Focus of the paper: time-constrained task allocation (e.g., search and rescue).



---

# Problem Formulation

* Search and rescue scenario with *n* AAVs and *m* survivors.
* Heterogeneous AAVs (e.g., R-AAVs, C-AAVs, S-AAVs).
* Distributed network with local communication.
* Objective: Minimize global objective score $$R(p, d, t)$$.
* Constraints: Feasible trajectories, binary task assignment variables.

$$\text{Minimize } R(p, d, t) \text{ subject to constraints}$$
---
![width:80cm](image-1.png)

---

# Uncertainty in Task Space

* Task space has dynamic uncertainty (continuous and discrete).
* Uncertainty affects task reward value.
* Bayes' theorem is used to update uncertainty information.
* Mathematical expectation is used to estimate reward values.
* AAV types (R-AAVs, C-AAVs) are used to collect information.

$$P(c(t+1) | c(t), C(t)) = \frac{P(C(t) | c(t)) P(c(t))}{P(C(t))}$$

---

# Modified Consensus-Based Algorithm

* Two-process algorithm: Task Selection, Consensus.
* Task Selection:
    * Enhanced Consensus-Based Bundle Algorithm (CBBA) to consider task precedence and dependencies.
    * Bidding strategies (optimistic, pessimistic).
    * Reward calculation considering time and travel cost.
* Consensus Process:
    * AAVs exchange bids and bundles to agree on assignments.
    * Ensures task dependency constraints are met.

---

# Task Selection Process Details

* AAVs calculate reward of their task bundles.

$$J_{P_i} = \sum_{j=1}^{N_t} c_{ij}(P_i) d_{ij}$$

* AAVs evaluate the increased reward of adding new tasks.

$$J_{ij}(P_i) = J_{(P_i \oplus n_j^* j)} - J_{P_i}$$

* Reward is calculated considering initial importance and time.

$$reward_j = c_j e^{-\lambda (\tau_i^j (p_i) - start_j)}$$

* Travel cost is calculated based on distance and fuel consumption.

$$cost_j = d_i'(p_i) \gamma$$

* Overall score is calculated as reward minus cost.

$$S_j^{p_i} = reward_j - cost_j$$

---

# Consensus Process Details

* AAVs exchange task bundles and bid values.
* AAVs compare bids and update task assignments.
* Algorithm ensures task dependency constraints are satisfied.
* Constraint violation counters are used.

---

# Performance Results

* Simulation scenario: cooperative reconnaissance and confirmation tasks.
* Three types of AAVs (A, B, C).
* Randomly generated task and AAV positions.
* Algorithm tested in three cases with varying numbers of AAVs.
* Results: task allocation lists, AAV paths, completion times.
* Modified CBBA handles constraints better than conventional CBBA.
---

Case 1: 3 AAVs of type A, 2 AAVs of type B.
* Type A: Assesment, Type B: Sensor, Type C: Imaging
![alt text](image-2.png) ![alt text](image-3.png)

---

# Conclusion

* The paper proposes a modified consensus-based algorithm for dynamic task assignment of heterogeneous AAVs.
* The algorithm considers uncertainties and task dependencies.
* Simulation results demonstrate the effectiveness of the proposed approach.
* The algorithm outperforms conventional CBBA in handling constraints.
