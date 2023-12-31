/*
 * endoflife.date
 * Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)
 *
 * The version of the OpenAPI document: 0.0.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * Details of a single release cycle of a given product. There might be some slight variations to this depending on the product.
 */
public class OASCycle {
    /**
     * Release Cycle
     * @return cycle
     */
    public oas_any_type_not_mapped cycle { get; set; }

    /**
     * Release Date for the first release in this cycle
     * @return releaseDate
     */
    public oas_any_type_not_mapped releaseDate { get; set; }

    /**
     * End of Life Date for this release cycle
     * @return eol
     */
    public oas_any_type_not_mapped eol { get; set; }

    /**
     * Latest release in this cycle
     * @return latest
     */
    public oas_any_type_not_mapped latest { get; set; }

    /**
     * Link to changelog for the latest release, if available
     * @return link
     */
    public oas_any_type_not_mapped link { get; set; }

    /**
     * Whether this release cycle has long-term-support (LTS). Can be a date instead in YYYY-MM-DD format as well if the release enters LTS status on a given date.\n
     * @return lts
     */
    public oas_any_type_not_mapped lts { get; set; }

    /**
     * Whether this release cycle has active support
     * @return support
     */
    public oas_any_type_not_mapped support { get; set; }

    /**
     * Whether this cycle is now discontinued.
     * @return discontinued
     */
    public oas_any_type_not_mapped discontinued { get; set; }

    public static OASCycle getExample() {
        OASCycle cycle = new OASCycle();
          cycle.cycle = oas_any_type_not_mapped.getExample();
          cycle.releaseDate = oas_any_type_not_mapped.getExample();
          cycle.eol = oas_any_type_not_mapped.getExample();
          cycle.latest = oas_any_type_not_mapped.getExample();
          cycle.link = oas_any_type_not_mapped.getExample();
          cycle.lts = oas_any_type_not_mapped.getExample();
          cycle.support = oas_any_type_not_mapped.getExample();
          cycle.discontinued = oas_any_type_not_mapped.getExample();
        return cycle;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASCycle) {           
            OASCycle cycle = (OASCycle) obj;
            return this.cycle == cycle.cycle
                && this.releaseDate == cycle.releaseDate
                && this.eol == cycle.eol
                && this.latest == cycle.latest
                && this.link == cycle.link
                && this.lts == cycle.lts
                && this.support == cycle.support
                && this.discontinued == cycle.discontinued;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (cycle == null ? 0 : System.hashCode(cycle));
        hashCode = (17 * hashCode) + (releaseDate == null ? 0 : System.hashCode(releaseDate));
        hashCode = (17 * hashCode) + (eol == null ? 0 : System.hashCode(eol));
        hashCode = (17 * hashCode) + (latest == null ? 0 : System.hashCode(latest));
        hashCode = (17 * hashCode) + (link == null ? 0 : System.hashCode(link));
        hashCode = (17 * hashCode) + (lts == null ? 0 : System.hashCode(lts));
        hashCode = (17 * hashCode) + (support == null ? 0 : System.hashCode(support));
        hashCode = (17 * hashCode) + (discontinued == null ? 0 : System.hashCode(discontinued));
        return hashCode;
    }
}

