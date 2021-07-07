from customer import Customer


class VIPCustomer(Customer):
    def __init__(self):
        self.customer_grade = "VIP"
        self.bonus_ratio = 0.05
        self.sales_ratio = 0.1
        self.agentID = 0
