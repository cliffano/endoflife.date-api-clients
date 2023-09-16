/**
 * endoflife.date
 * Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)
 *
 * The version of the OpenAPI document: 0.0.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Cycle.h
 *
 * Details of a single release cycle of a given product. There might be some slight variations to this depending on the product.
 */

#ifndef Cycle_H_
#define Cycle_H_



#include "AnyType.h"
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>
#include "helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Details of a single release cycle of a given product. There might be some slight variations to this depending on the product.
/// </summary>
class  Cycle 
{
public:
    Cycle() = default;
    explicit Cycle(boost::property_tree::ptree const& pt);
    virtual ~Cycle() = default;

    Cycle(const Cycle& other) = default; // copy constructor
    Cycle(Cycle&& other) noexcept = default; // move constructor

    Cycle& operator=(const Cycle& other) = default; // copy assignment
    Cycle& operator=(Cycle&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// Cycle members

    /// <summary>
    /// Release Cycle
    /// </summary>
    AnyType getCycle() const;
    void setCycle(AnyType value);

    /// <summary>
    /// Release Date for the first release in this cycle
    /// </summary>
    AnyType getReleaseDate() const;
    void setReleaseDate(AnyType value);

    /// <summary>
    /// End of Life Date for this release cycle
    /// </summary>
    AnyType getEol() const;
    void setEol(AnyType value);

    /// <summary>
    /// Latest release in this cycle
    /// </summary>
    AnyType getLatest() const;
    void setLatest(AnyType value);

    /// <summary>
    /// Link to changelog for the latest release, if available
    /// </summary>
    AnyType getLink() const;
    void setLink(AnyType value);

    /// <summary>
    /// Whether this release cycle has long-term-support (LTS). Can be a date instead in YYYY-MM-DD format as well if the release enters LTS status on a given date. 
    /// </summary>
    AnyType getLts() const;
    void setLts(AnyType value);

    /// <summary>
    /// Whether this release cycle has active support
    /// </summary>
    AnyType getSupport() const;
    void setSupport(AnyType value);

    /// <summary>
    /// Whether this cycle is now discontinued.
    /// </summary>
    AnyType getDiscontinued() const;
    void setDiscontinued(AnyType value);

protected:
    AnyType m_Cycle = nullptr;
    AnyType m_ReleaseDate = nullptr;
    AnyType m_Eol = nullptr;
    AnyType m_Latest = nullptr;
    AnyType m_Link = nullptr;
    AnyType m_Lts = nullptr;
    AnyType m_Support = nullptr;
    AnyType m_Discontinued = nullptr;
};

std::vector<Cycle> createCycleVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<Cycle>(const Cycle& val) {
    return val.toPropertyTree();
}

template<>
inline Cycle fromPt<Cycle>(const boost::property_tree::ptree& pt) {
    Cycle ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* Cycle_H_ */
