
#pragma once

/**
 * Do not edit this file directly.
 * It is automatically generate dby record_types.py
 */

#include <chrono>
#include <unordered_map>
#include <vector>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-private-field"

namespace ILLIXR {

/**
 * @brief a light-weight RTTI discriminator for record types.
 *
 * Unlike [std::type_info][1], this is an integer, which makes it easier to store and it can be switch-cased.
 *
 * [1]: https://en.cppreference.com/w/cpp/types/type_info
 */
enum class record_type_id {
	misc_record,
	component_start_record,
	component_stop_record,
	start_skip_iteration_record,
	stop_skip_iteration_record,
	start_iteration_record,
	stop_iteration_record,
	start_callback_record,
	stop_callback_record,
	switchboard_topic_record,
	switchboard_write_record,
	switchboard_read_record
};


/**
 * @brief a light-weight RTTI discriminator for base types (fields of record types).
 *
 * Unlike [std::type_info][1], this is an integer, which makes it easier to store and it can be switch-cased.
 *
 * [1]: https://en.cppreference.com/w/cpp/types/type_info
 */
enum class base_type_id {
	std__chrono__nanoseconds,
	std__size_t,
	std__string
};


class misc_record {
public:
	misc_record(std::size_t component_id_ , std::string notes_ )
		: component_id{component_id_},
		notes{notes_}
	{ }
	static const record_type_id id = record_type_id::misc_record;
private:
	std::size_t component_id;
	std::string notes;
};


class component_start_record {
public:
	component_start_record(std::size_t component_id_ , std::string name_ )
		: component_id{component_id_},
		name{name_}
	{ }
	static const record_type_id id = record_type_id::component_start_record;
private:
	std::size_t component_id;
	std::string name;
};


class component_stop_record {
public:
	component_stop_record(std::size_t component_id_ )
		: component_id{component_id_}
	{ }
	static const record_type_id id = record_type_id::component_stop_record;
private:
	std::size_t component_id;
};


class start_skip_iteration_record {
public:
	start_skip_iteration_record(std::size_t component_id_ , std::size_t iteration_ , std::size_t skip_iteration_ )
		: component_id{component_id_},
		iteration{iteration_},
		skip_iteration{skip_iteration_},
		cpu_time{thread_cpu_time()}
	{ }
	static const record_type_id id = record_type_id::start_skip_iteration_record;
private:
	std::size_t component_id;
	std::size_t iteration;
	std::size_t skip_iteration;
	std::chrono::nanoseconds cpu_time;
};


class stop_skip_iteration_record {
public:
	stop_skip_iteration_record(std::size_t component_id_ , std::size_t iteration_ , std::size_t skip_iteration_ )
		: component_id{component_id_},
		iteration{iteration_},
		skip_iteration{skip_iteration_},
		cpu_time{thread_cpu_time()}
	{ }
	static const record_type_id id = record_type_id::stop_skip_iteration_record;
private:
	std::size_t component_id;
	std::size_t iteration;
	std::size_t skip_iteration;
	std::chrono::nanoseconds cpu_time;
};


class start_iteration_record {
public:
	start_iteration_record(std::size_t component_id_ , std::size_t iteration_ , std::size_t skip_iteration_ )
		: component_id{component_id_},
		iteration{iteration_},
		skip_iteration{skip_iteration_},
		cpu_time{thread_cpu_time()}
	{ }
	static const record_type_id id = record_type_id::start_iteration_record;
private:
	std::size_t component_id;
	std::size_t iteration;
	std::size_t skip_iteration;
	std::chrono::nanoseconds cpu_time;
};


class stop_iteration_record {
public:
	stop_iteration_record(std::size_t component_id_ , std::size_t iteration_ , std::size_t skip_iteration_ )
		: component_id{component_id_},
		iteration{iteration_},
		skip_iteration{skip_iteration_},
		cpu_time{thread_cpu_time()}
	{ }
	static const record_type_id id = record_type_id::stop_iteration_record;
private:
	std::size_t component_id;
	std::size_t iteration;
	std::size_t skip_iteration;
	std::chrono::nanoseconds cpu_time;
};


class start_callback_record {
public:
	start_callback_record(std::size_t component_id_ , std::size_t topic_id_ , std::size_t serial_no_ )
		: component_id{component_id_},
		topic_id{topic_id_},
		serial_no{serial_no_},
		cpu_time{thread_cpu_time()}
	{ }
	static const record_type_id id = record_type_id::start_callback_record;
private:
	std::size_t component_id;
	std::size_t topic_id;
	std::size_t serial_no;
	std::chrono::nanoseconds cpu_time;
};


class stop_callback_record {
public:
	stop_callback_record(std::size_t component_id_ , std::size_t topic_id_ , std::size_t serial_no_ )
		: component_id{component_id_},
		topic_id{topic_id_},
		serial_no{serial_no_},
		cpu_time{thread_cpu_time()}
	{ }
	static const record_type_id id = record_type_id::stop_callback_record;
private:
	std::size_t component_id;
	std::size_t topic_id;
	std::size_t serial_no;
	std::chrono::nanoseconds cpu_time;
};


class switchboard_topic_record {
public:
	switchboard_topic_record(std::size_t component_id_ , std::size_t topic_id_ , std::string type_name_ , std::string name_ , std::size_t bytes_ )
		: component_id{component_id_},
		topic_id{topic_id_},
		type_name{type_name_},
		name{name_},
		bytes{bytes_}
	{ }
	static const record_type_id id = record_type_id::switchboard_topic_record;
private:
	std::size_t component_id;
	std::size_t topic_id;
	std::string type_name;
	std::string name;
	std::size_t bytes;
};


class switchboard_write_record {
public:
	switchboard_write_record(std::size_t component_id_ , std::size_t topic_id_ , std::size_t serial_no_ )
		: component_id{component_id_},
		topic_id{topic_id_},
		serial_no{serial_no_}
	{ }
	static const record_type_id id = record_type_id::switchboard_write_record;
private:
	std::size_t component_id;
	std::size_t topic_id;
	std::size_t serial_no;
};


class switchboard_read_record {
public:
	switchboard_read_record(std::size_t component_id_ , std::size_t topic_id_ , std::size_t serial_no_ )
		: component_id{component_id_},
		topic_id{topic_id_},
		serial_no{serial_no_}
	{ }
	static const record_type_id id = record_type_id::switchboard_read_record;
private:
	std::size_t component_id;
	std::size_t topic_id;
	std::size_t serial_no;
};


struct record_type_description {
public:
	std::size_t size;
	std::string name;
	std::vector<base_type_id> fields;
};


/**
 * @brief A description of each record type.
 *
 * This map will help you know what to do when you get a void* record.
 */
std::unordered_map<record_type_id, record_type_description> record_type_map {
	{
		record_type_id::misc_record,
		{
			sizeof(misc_record),
			"misc_record",
			{
				base_type_id::std__size_t,
				base_type_id::std__string
			}
		}
	},
	{
		record_type_id::component_start_record,
		{
			sizeof(component_start_record),
			"component_start_record",
			{
				base_type_id::std__size_t,
				base_type_id::std__string
			}
		}
	},
	{
		record_type_id::component_stop_record,
		{
			sizeof(component_stop_record),
			"component_stop_record",
			{
				base_type_id::std__size_t
			}
		}
	},
	{
		record_type_id::start_skip_iteration_record,
		{
			sizeof(start_skip_iteration_record),
			"start_skip_iteration_record",
			{
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__chrono__nanoseconds
			}
		}
	},
	{
		record_type_id::stop_skip_iteration_record,
		{
			sizeof(stop_skip_iteration_record),
			"stop_skip_iteration_record",
			{
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__chrono__nanoseconds
			}
		}
	},
	{
		record_type_id::start_iteration_record,
		{
			sizeof(start_iteration_record),
			"start_iteration_record",
			{
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__chrono__nanoseconds
			}
		}
	},
	{
		record_type_id::stop_iteration_record,
		{
			sizeof(stop_iteration_record),
			"stop_iteration_record",
			{
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__chrono__nanoseconds
			}
		}
	},
	{
		record_type_id::start_callback_record,
		{
			sizeof(start_callback_record),
			"start_callback_record",
			{
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__chrono__nanoseconds
			}
		}
	},
	{
		record_type_id::stop_callback_record,
		{
			sizeof(stop_callback_record),
			"stop_callback_record",
			{
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__chrono__nanoseconds
			}
		}
	},
	{
		record_type_id::switchboard_topic_record,
		{
			sizeof(switchboard_topic_record),
			"switchboard_topic_record",
			{
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__string,
				base_type_id::std__string,
				base_type_id::std__size_t
			}
		}
	},
	{
		record_type_id::switchboard_write_record,
		{
			sizeof(switchboard_write_record),
			"switchboard_write_record",
			{
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__size_t
			}
		}
	},
	{
		record_type_id::switchboard_read_record,
		{
			sizeof(switchboard_read_record),
			"switchboard_read_record",
			{
				base_type_id::std__size_t,
				base_type_id::std__size_t,
				base_type_id::std__size_t
			}
		}
	}
};


std::unordered_map<base_type_id, std::size_t> base_type_map {
	{base_type_id::std__chrono__nanoseconds, sizeof(std::chrono::nanoseconds)},
	{base_type_id::std__size_t, sizeof(std::size_t)},
	{base_type_id::std__string, sizeof(std::string)}
};


}
#pragma GCC diagnostic pop
