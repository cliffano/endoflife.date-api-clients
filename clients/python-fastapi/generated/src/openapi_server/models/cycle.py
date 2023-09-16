# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, Field, validator  # noqa: F401


class Cycle(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    Cycle - a model defined in OpenAPI

        cycle: The cycle of this Cycle [Optional].
        release_date: The release_date of this Cycle [Optional].
        eol: The eol of this Cycle [Optional].
        latest: The latest of this Cycle [Optional].
        link: The link of this Cycle [Optional].
        lts: The lts of this Cycle [Optional].
        support: The support of this Cycle [Optional].
        discontinued: The discontinued of this Cycle [Optional].
    """

    cycle: Optional[object] = Field(alias="cycle", default=None)
    release_date: Optional[object] = Field(alias="releaseDate", default=None)
    eol: Optional[object] = Field(alias="eol", default=None)
    latest: Optional[object] = Field(alias="latest", default=None)
    link: Optional[object] = Field(alias="link", default=None)
    lts: Optional[object] = Field(alias="lts", default=None)
    support: Optional[object] = Field(alias="support", default=None)
    discontinued: Optional[object] = Field(alias="discontinued", default=None)

    @validator("release_date")
    def release_date_min_length(cls, value):
        assert len(value) >= 10
        return value

    @validator("release_date")
    def release_date_max_length(cls, value):
        assert len(value) <= 10
        return value

    @validator("eol")
    def eol_min_length(cls, value):
        assert len(value) >= 1
        return value

    @validator("latest")
    def latest_min_length(cls, value):
        assert len(value) >= 1
        return value

    @validator("link")
    def link_min_length(cls, value):
        assert len(value) >= 1
        return value

    @validator("support")
    def support_min_length(cls, value):
        assert len(value) >= 10
        return value

    @validator("support")
    def support_max_length(cls, value):
        assert len(value) <= 10
        return value

    @validator("discontinued")
    def discontinued_min_length(cls, value):
        assert len(value) >= 10
        return value

    @validator("discontinued")
    def discontinued_max_length(cls, value):
        assert len(value) <= 10
        return value

Cycle.update_forward_refs()
