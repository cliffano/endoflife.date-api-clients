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

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Cycle_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Cycle_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/AnyType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Details of a single release cycle of a given product. There might be some slight variations to this depending on the product.
/// </summary>
class  Cycle
    : public ModelBase
{
public:
    Cycle();
    virtual ~Cycle();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Cycle members

    /// <summary>
    /// Release Cycle
    /// </summary>
    std::shared_ptr<AnyType> getCycle() const;
    bool cycleIsSet() const;
    void unsetCycle();

    void setCycle(const std::shared_ptr<AnyType>& value);

    /// <summary>
    /// Release Date for the first release in this cycle
    /// </summary>
    std::shared_ptr<AnyType> getReleaseDate() const;
    bool releaseDateIsSet() const;
    void unsetReleaseDate();

    void setReleaseDate(const std::shared_ptr<AnyType>& value);

    /// <summary>
    /// End of Life Date for this release cycle
    /// </summary>
    std::shared_ptr<AnyType> getEol() const;
    bool eolIsSet() const;
    void unsetEol();

    void setEol(const std::shared_ptr<AnyType>& value);

    /// <summary>
    /// Latest release in this cycle
    /// </summary>
    std::shared_ptr<AnyType> getLatest() const;
    bool latestIsSet() const;
    void unsetLatest();

    void setLatest(const std::shared_ptr<AnyType>& value);

    /// <summary>
    /// Link to changelog for the latest release, if available
    /// </summary>
    std::shared_ptr<AnyType> getLink() const;
    bool linkIsSet() const;
    void unsetLink();

    void setLink(const std::shared_ptr<AnyType>& value);

    /// <summary>
    /// Whether this release cycle has long-term-support (LTS). Can be a date instead in YYYY-MM-DD format as well if the release enters LTS status on a given date. 
    /// </summary>
    std::shared_ptr<AnyType> getLts() const;
    bool ltsIsSet() const;
    void unsetLts();

    void setLts(const std::shared_ptr<AnyType>& value);

    /// <summary>
    /// Whether this release cycle has active support
    /// </summary>
    std::shared_ptr<AnyType> getSupport() const;
    bool supportIsSet() const;
    void unsetSupport();

    void setSupport(const std::shared_ptr<AnyType>& value);

    /// <summary>
    /// Whether this cycle is now discontinued.
    /// </summary>
    std::shared_ptr<AnyType> getDiscontinued() const;
    bool discontinuedIsSet() const;
    void unsetDiscontinued();

    void setDiscontinued(const std::shared_ptr<AnyType>& value);


protected:
    std::shared_ptr<AnyType> m_Cycle;
    bool m_CycleIsSet;
    std::shared_ptr<AnyType> m_ReleaseDate;
    bool m_ReleaseDateIsSet;
    std::shared_ptr<AnyType> m_Eol;
    bool m_EolIsSet;
    std::shared_ptr<AnyType> m_Latest;
    bool m_LatestIsSet;
    std::shared_ptr<AnyType> m_Link;
    bool m_LinkIsSet;
    std::shared_ptr<AnyType> m_Lts;
    bool m_LtsIsSet;
    std::shared_ptr<AnyType> m_Support;
    bool m_SupportIsSet;
    std::shared_ptr<AnyType> m_Discontinued;
    bool m_DiscontinuedIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Cycle_H_ */
