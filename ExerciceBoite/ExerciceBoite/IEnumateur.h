#pragma once

template<class T>
struct IEnumerateur {
	virtual T current() const = 0;
	virtual bool has_next() const = 0;
	virtual void next() = 0;
	virtual ~IEnumerateur() = default;
};