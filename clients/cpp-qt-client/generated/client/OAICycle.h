/**
 * endoflife.date
 * Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)
 *
 * The version of the OpenAPI document: 0.0.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICycle.h
 *
 * Details of a single release cycle of a given product. There might be some slight variations to this depending on the product.
 */

#ifndef OAICycle_H
#define OAICycle_H

#include <QJsonObject>

#include <QJsonValue>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICycle : public OAIObject {
public:
    OAICycle();
    OAICycle(QString json);
    ~OAICycle() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QJsonValue getCycle() const;
    void setCycle(const QJsonValue &cycle);
    bool is_cycle_Set() const;
    bool is_cycle_Valid() const;

    QJsonValue getReleaseDate() const;
    void setReleaseDate(const QJsonValue &release_date);
    bool is_release_date_Set() const;
    bool is_release_date_Valid() const;

    QJsonValue getEol() const;
    void setEol(const QJsonValue &eol);
    bool is_eol_Set() const;
    bool is_eol_Valid() const;

    QJsonValue getLatest() const;
    void setLatest(const QJsonValue &latest);
    bool is_latest_Set() const;
    bool is_latest_Valid() const;

    QJsonValue getLink() const;
    void setLink(const QJsonValue &link);
    bool is_link_Set() const;
    bool is_link_Valid() const;

    QJsonValue getLts() const;
    void setLts(const QJsonValue &lts);
    bool is_lts_Set() const;
    bool is_lts_Valid() const;

    QJsonValue getSupport() const;
    void setSupport(const QJsonValue &support);
    bool is_support_Set() const;
    bool is_support_Valid() const;

    QJsonValue getDiscontinued() const;
    void setDiscontinued(const QJsonValue &discontinued);
    bool is_discontinued_Set() const;
    bool is_discontinued_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QJsonValue m_cycle;
    bool m_cycle_isSet;
    bool m_cycle_isValid;

    QJsonValue m_release_date;
    bool m_release_date_isSet;
    bool m_release_date_isValid;

    QJsonValue m_eol;
    bool m_eol_isSet;
    bool m_eol_isValid;

    QJsonValue m_latest;
    bool m_latest_isSet;
    bool m_latest_isValid;

    QJsonValue m_link;
    bool m_link_isSet;
    bool m_link_isValid;

    QJsonValue m_lts;
    bool m_lts_isSet;
    bool m_lts_isValid;

    QJsonValue m_support;
    bool m_support_isSet;
    bool m_support_isValid;

    QJsonValue m_discontinued;
    bool m_discontinued_isSet;
    bool m_discontinued_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICycle)

#endif // OAICycle_H
