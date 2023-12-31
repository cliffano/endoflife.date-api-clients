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

import { RequestFile } from './models';

/**
* Details of a single release cycle of a given product. There might be some slight variations to this depending on the product.
*/
export class Cycle {
    /**
    * Release Cycle
    */
    'cycle'?: any | null;
    /**
    * Release Date for the first release in this cycle
    */
    'releaseDate'?: any | null;
    /**
    * End of Life Date for this release cycle
    */
    'eol'?: any | null;
    /**
    * Latest release in this cycle
    */
    'latest'?: any | null;
    /**
    * Link to changelog for the latest release, if available
    */
    'link'?: any | null;
    /**
    * Whether this release cycle has long-term-support (LTS). Can be a date instead in YYYY-MM-DD format as well if the release enters LTS status on a given date. 
    */
    'lts'?: any | null;
    /**
    * Whether this release cycle has active support
    */
    'support'?: any | null;
    /**
    * Whether this cycle is now discontinued.
    */
    'discontinued'?: any | null;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "cycle",
            "baseName": "cycle",
            "type": "any"
        },
        {
            "name": "releaseDate",
            "baseName": "releaseDate",
            "type": "any"
        },
        {
            "name": "eol",
            "baseName": "eol",
            "type": "any"
        },
        {
            "name": "latest",
            "baseName": "latest",
            "type": "any"
        },
        {
            "name": "link",
            "baseName": "link",
            "type": "any"
        },
        {
            "name": "lts",
            "baseName": "lts",
            "type": "any"
        },
        {
            "name": "support",
            "baseName": "support",
            "type": "any"
        },
        {
            "name": "discontinued",
            "baseName": "discontinued",
            "type": "any"
        }    ];

    static getAttributeTypeMap() {
        return Cycle.attributeTypeMap;
    }
}

