import matplotlib.pyplot as plt
from collections import defaultdict
import os
print("Current directory:", os.getcwd())


def read_input_file(file_name):
    file_path = 'data_memory/'
    file_name = file_path + file_name.lower()
    with open(file_name, 'r') as file:
        data = file.read().split()
    return data


def hex_to_int(hex_str):
    return int(hex_str, 16)


def calculate_pdf(data):
    counts = defaultdict(int)
    total_samples = 0
    max_samples = 200
    stop_flag = False

    for item in data:
        value = hex_to_int(item)
        counts[value] += 1
        total_samples += 1

        if counts[value] >= max_samples:
            stop_flag = True
            break

    pdf = {key: count / total_samples for key, count in counts.items()}
    return pdf, stop_flag


def plot_pdf(pdf, distribution_name):
    plt.scatter(pdf.keys(), pdf.values(), marker="o", s=7)
    plt.xlabel('Values')
    plt.ylabel('Probability')
    plt.title('Probability Density Function for ' +
              distribution_name + ' (PDF)')
    # plt.savefig("PDF_" + distribution_name)
    plt.show()


def main():
    distributions = ['Sine', 'Noisy', 'Triangle', 'Gaussian']

    for distribution in distributions:
        data = read_input_file(distribution+'.mem')
        pdf, stop_flag = calculate_pdf(data)

        print("PDF of the input file:")
        for key, value in pdf.items():
            print(f"{key}: {value}")

        plot_pdf(pdf, distribution)

        if stop_flag:
            print("Stopped calculation as one of the bins reached 200 samples.")


if __name__ == "__main__":
    main()
